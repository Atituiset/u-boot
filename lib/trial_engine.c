// SPDX-License-Identifier: GPL-2.0+
/* ---- TRIAL SEED: 跨文件表驱动 + 深处解引用（mode 对照），勿合并 ----
 * 本文件内没有任何判空：契约约定在调用方入口判空（common/cli.c）。
 */
#include <common.h>
#include <string.h>

struct trial_frame {
	const char *buf;
};

/* 第 5 层（最深处）：解引用 frame->buf——依赖入口契约 */
static int render_line(const struct trial_frame *frame)
{
	return frame->buf[0];
}

/* 第 2~4 层：纯转发 */
static int compose(const struct trial_frame *frame) { return render_line(frame); }
static int prepare(const struct trial_frame *frame) { return compose(frame); }
static int accept(const struct trial_frame *frame) { return prepare(frame); }

/* 分发表：chan → handler（本仓典型形态） */
typedef int (*trial_handler_t)(const struct trial_frame *);
static const trial_handler_t TRIAL_HANDLER_TBL[3] = {
	accept, accept, accept,
};

int trial_engine_render(unsigned int chan, const struct trial_frame *frame)
{
	if (chan >= 3)
		return -1;
	return TRIAL_HANDLER_TBL[chan](frame);
}
