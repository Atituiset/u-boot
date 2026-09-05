# 消息分发表导航图 — uboot

> 基线 commit: `4826f09ba233d5618543d4bbe865323625b562c0`  
> 生成时间: 2026-09-05T20:35:28+00:00  
> 表数量: 23，表项总数: 152

## `f19_grp`

位置: `arch/arm/mach-imx/imx9/scmi/fdt.c:582`  
source_hash: `sha256:0c06cefb6eea8229…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `6` | `0x40` | `disable_pciea_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:442` | `c:fdt.c@F@disable_pciea_node` | — |
| `7` | `0x80` | `disable_pcieb_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:452` | `c:fdt.c@F@disable_pcieb_node` | — |
| `17` | `0x20000` | `disable_gpu_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:420` | `c:fdt.c@F@disable_gpu_node` | — |
| `18` | `0x40000` | `disable_vpu_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:371` | `c:fdt.c@F@disable_vpu_node` | — |
| `19` | `0x80000` | `disable_jpegenc_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:334` | `c:fdt.c@F@disable_jpegenc_node` | — |
| `20` | `0x100000` | `disable_jpegdec_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:325` | `c:fdt.c@F@disable_jpegdec_node` | — |
| `22` | `0x400000` | `disable_mipicsi0_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:343` | `c:fdt.c@F@disable_mipicsi0_node` | — |
| `23` | `0x800000` | `disable_mipicsi1_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:352` | `c:fdt.c@F@disable_mipicsi1_node` | — |
| `24` | `0x1000000` | `disable_mipidsi_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:486` | `c:@F@disable_mipidsi_node` | — |
| `26` | `0x4000000` | `disable_vpuenc_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:398` | `c:fdt.c@F@disable_vpuenc_node` | — |
| `27` | `0x8000000` | `disable_vpuwave511_node` | `arch/arm/mach-imx/imx9/scmi/fdt.c:407` | `c:fdt.c@F@disable_vpuwave511_node` | — |

## `boot_os`

位置: `boot/bootm_os.c:529`  
source_hash: `sha256:b89b3ab3562ea6e2…`

（空表）

## `of_busses`

位置: `boot/fdt_support.c:1378`  
source_hash: `sha256:5464031d729647c1…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"default"` | — | `of_bus_default_translate` | `boot/fdt_support.c:1315` | `c:fdt_support.c@F@of_bus_default_translate` | — |

## `vbe_reqs`

位置: `boot/vbe_request.c:97`  
source_hash: `sha256:591b433300a91351…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"aslr-move"` | — | `vbe_req_aslr_move` | `boot/vbe_request.c:79` | `c:vbe_request.c@F@vbe_req_aslr_move` | — |
| `"aslr-rand"` | — | `vbe_req_aslr_rand` | `boot/vbe_request.c:84` | `c:vbe_request.c@F@vbe_req_aslr_rand` | — |
| `"efi-runtime-rand"` | — | `vbe_req_efi_runtime_rand` | `boot/vbe_request.c:89` | `c:vbe_request.c@F@vbe_req_efi_runtime_rand` | — |
| `"random-rand"` | — | `vbe_req_random_seed` | `boot/vbe_request.c:74` | `c:vbe_request.c@F@vbe_req_random_seed` | — |

## `map_handlers`

位置: `cmd/blkmap.c:89`  
source_hash: `sha256:fcdbf6d33911752a…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"linear"` | — | `do_blkmap_map_linear` | `cmd/blkmap.c:28` | `c:blkmap.c@F@do_blkmap_map_linear` | — |
| `"mem"` | — | `do_blkmap_map_mem` | `cmd/blkmap.c:62` | `c:blkmap.c@F@do_blkmap_map_mem` | — |

## `blkmap_subcmds`

位置: `cmd/blkmap.c:219`  
source_hash: `sha256:fcdbf6d33911752a…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `info` | — | `do_blkmap_common` | `cmd/blkmap.c:207` | `c:blkmap.c@F@do_blkmap_common` | — |
| `part` | — | `do_blkmap_common` | `cmd/blkmap.c:207` | `c:blkmap.c@F@do_blkmap_common` | — |
| `dev` | — | `do_blkmap_common` | `cmd/blkmap.c:207` | `c:blkmap.c@F@do_blkmap_common` | — |
| `read` | — | `do_blkmap_common` | `cmd/blkmap.c:207` | `c:blkmap.c@F@do_blkmap_common` | — |
| `write` | — | `do_blkmap_common` | `cmd/blkmap.c:207` | `c:blkmap.c@F@do_blkmap_common` | — |
| `get` | — | `do_blkmap_get` | `cmd/blkmap.c:174` | `c:blkmap.c@F@do_blkmap_get` | — |
| `create` | — | `do_blkmap_create` | `cmd/blkmap.c:125` | `c:blkmap.c@F@do_blkmap_create` | — |
| `destroy` | — | `do_blkmap_destroy` | `cmd/blkmap.c:146` | `c:blkmap.c@F@do_blkmap_destroy` | — |
| `map` | — | `do_blkmap_map` | `cmd/blkmap.c:96` | `c:blkmap.c@F@do_blkmap_map` | — |

## `select_boot_file_menu_items`

位置: `cmd/eficonfig.c:1087`  
source_hash: `sha256:477681660a31f74f…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"Select File"` | — | `eficonfig_process_select_file` | `include/efi_config.h:109` | `c:@F@eficonfig_process_select_file` | — |
| `"Enter URI"` | — | `eficonfig_boot_add_uri` | `cmd/eficonfig.c:1029` | `c:eficonfig.c@F@eficonfig_boot_add_uri` | — |
| `"Clear"` | — | `eficonfig_process_clear_file_selection` | `cmd/eficonfig.c:1072` | `c:@F@eficonfig_process_clear_file_selection` | — |
| `"Quit"` | — | `eficonfig_process_quit` | `cmd/eficonfig.c:306` | `c:@F@eficonfig_process_quit` | — |

## `select_file_menu_items`

位置: `cmd/eficonfig.c:1094`  
source_hash: `sha256:477681660a31f74f…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"Select File"` | — | `eficonfig_process_select_file` | `include/efi_config.h:109` | `c:@F@eficonfig_process_select_file` | — |
| `"Clear"` | — | `eficonfig_process_clear_file_selection` | `cmd/eficonfig.c:1072` | `c:@F@eficonfig_process_clear_file_selection` | — |
| `"Quit"` | — | `eficonfig_process_quit` | `cmd/eficonfig.c:306` | `c:@F@eficonfig_process_quit` | — |

## `maintenance_menu_items`

位置: `cmd/eficonfig.c:2440`  
source_hash: `sha256:477681660a31f74f…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"Add Boot Option"` | — | `eficonfig_process_add_boot_option` | `cmd/eficonfig.c:1714` | `c:eficonfig.c@F@eficonfig_process_add_boot_option` | — |
| `"Edit Boot Option"` | — | `eficonfig_process_edit_boot_option` | `cmd/eficonfig.c:1924` | `c:eficonfig.c@F@eficonfig_process_edit_boot_option` | — |
| `"Change Boot Order"` | — | `eficonfig_process_change_boot_order` | `cmd/eficonfig.c:2329` | `c:eficonfig.c@F@eficonfig_process_change_boot_order` | — |
| `"Delete Boot Option"` | — | `eficonfig_process_delete_boot_option` | `cmd/eficonfig.c:2390` | `c:eficonfig.c@F@eficonfig_process_delete_boot_option` | — |
| `"Quit"` | — | `eficonfig_process_quit` | `cmd/eficonfig.c:306` | `c:@F@eficonfig_process_quit` | — |

## `ethsw_cmd_def`

位置: `cmd/ethsw.c:133`  
source_hash: `sha256:dca7f83cdc33610d…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `{
					ethsw_id_statistics,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_port_stats_help_key_func` | `cmd/ethsw.c:21` | `c:ethsw.c@F@ethsw_port_stats_help_key_func` | — |
| `{
					ethsw_id_learning,
					ethsw_id_key_end,
			}` | — | `ethsw_learn_help_key_func` | `cmd/ethsw.c:32` | `c:ethsw.c@F@ethsw_learn_help_key_func` | — |
| `{
					ethsw_id_learning,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_learn_help_key_func` | `cmd/ethsw.c:32` | `c:ethsw.c@F@ethsw_learn_help_key_func` | — |
| `{
					ethsw_id_fdb,
					ethsw_id_key_end,
			}` | — | `ethsw_fdb_help_key_func` | `cmd/ethsw.c:44` | `c:ethsw.c@F@ethsw_fdb_help_key_func` | — |
| `{
					ethsw_id_fdb,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_fdb_help_key_func` | `cmd/ethsw.c:44` | `c:ethsw.c@F@ethsw_fdb_help_key_func` | — |
| `{
					ethsw_id_pvid,
					ethsw_id_key_end,
			}` | — | `ethsw_pvid_help_key_func` | `cmd/ethsw.c:55` | `c:ethsw.c@F@ethsw_pvid_help_key_func` | — |
| `{
					ethsw_id_pvid,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_pvid_help_key_func` | `cmd/ethsw.c:55` | `c:ethsw.c@F@ethsw_pvid_help_key_func` | — |
| `{
					ethsw_id_vlan,
					ethsw_id_key_end,
			}` | — | `ethsw_vlan_help_key_func` | `cmd/ethsw.c:66` | `c:ethsw.c@F@ethsw_vlan_help_key_func` | — |
| `{
					ethsw_id_vlan,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_vlan_help_key_func` | `cmd/ethsw.c:66` | `c:ethsw.c@F@ethsw_vlan_help_key_func` | — |
| `{
					ethsw_id_untagged,
					ethsw_id_key_end,
			}` | — | `ethsw_port_untag_help_key_func` | `cmd/ethsw.c:77` | `c:ethsw.c@F@ethsw_port_untag_help_key_func` | — |
| `{
					ethsw_id_untagged,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_port_untag_help_key_func` | `cmd/ethsw.c:77` | `c:ethsw.c@F@ethsw_port_untag_help_key_func` | — |
| `{
					ethsw_id_egress,
					ethsw_id_tag,
					ethsw_id_key_end,
			}` | — | `ethsw_egr_tag_help_key_func` | `cmd/ethsw.c:89` | `c:ethsw.c@F@ethsw_egr_tag_help_key_func` | — |
| `{
					ethsw_id_egress,
					ethsw_id_tag,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_egr_tag_help_key_func` | `cmd/ethsw.c:89` | `c:ethsw.c@F@ethsw_egr_tag_help_key_func` | — |
| `{
					ethsw_id_vlan,
					ethsw_id_fdb,
					ethsw_id_key_end,
			}` | — | `ethsw_vlan_learn_help_key_func` | `cmd/ethsw.c:100` | `c:ethsw.c@F@ethsw_vlan_learn_help_key_func` | — |
| `{
					ethsw_id_vlan,
					ethsw_id_fdb,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_vlan_learn_help_key_func` | `cmd/ethsw.c:100` | `c:ethsw.c@F@ethsw_vlan_learn_help_key_func` | — |
| `{
					ethsw_id_ingress,
					ethsw_id_filtering,
					ethsw_id_key_end,
			}` | — | `ethsw_ingr_fltr_help_key_func` | `cmd/ethsw.c:111` | `c:ethsw.c@F@ethsw_ingr_fltr_help_key_func` | — |
| `{
					ethsw_id_ingress,
					ethsw_id_filtering,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_ingr_fltr_help_key_func` | `cmd/ethsw.c:111` | `c:ethsw.c@F@ethsw_ingr_fltr_help_key_func` | — |
| `{
					ethsw_id_aggr,
					ethsw_id_key_end,
			}` | — | `ethsw_port_aggr_help_key_func` | `cmd/ethsw.c:122` | `c:ethsw.c@F@ethsw_port_aggr_help_key_func` | — |
| `{
					ethsw_id_aggr,
					ethsw_id_help,
					ethsw_id_key_end,
			}` | — | `ethsw_port_aggr_help_key_func` | `cmd/ethsw.c:122` | `c:ethsw.c@F@ethsw_port_aggr_help_key_func` | — |

## `keyword`

位置: `cmd/ethsw.c:636`  
source_hash: `sha256:dca7f83cdc33610d…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"help"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"show"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"port"` | — | `keyword_match_port` | `cmd/ethsw.c:612` | `c:ethsw.c@F@keyword_match_port` | — |
| `"enable"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"disable"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"statistics"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"clear"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"learning"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"auto"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"vlan"` | — | `keyword_match_vlan` | `cmd/ethsw.c:615` | `c:ethsw.c@F@keyword_match_vlan` | — |
| `"fdb"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"add"` | — | `keyword_match_mac_addr` | `cmd/ethsw.c:621` | `c:ethsw.c@F@keyword_match_mac_addr` | — |
| `"del"` | — | `keyword_match_mac_addr` | `cmd/ethsw.c:621` | `c:ethsw.c@F@keyword_match_mac_addr` | — |
| `"flush"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"pvid"` | — | `keyword_match_pvid` | `cmd/ethsw.c:618` | `c:ethsw.c@F@keyword_match_pvid` | — |
| `"untagged"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"all"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"none"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"egress"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"tag"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"classified"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"shared"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"private"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"ingress"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"filtering"` | — | `keyword_match_gen` | `cmd/ethsw.c:609` | `c:ethsw.c@F@keyword_match_gen` | — |
| `"aggr"` | — | `keyword_match_aggr` | `cmd/ethsw.c:624` | `c:ethsw.c@F@keyword_match_aggr` | — |

## `of_busses`

位置: `drivers/core/of_addr.c:98`  
source_hash: `sha256:f993b3448487b709…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"default"` | — | `of_bus_default_get_flags` | `drivers/core/of_addr.c:90` | `c:of_addr.c@F@of_bus_default_get_flags` | — |

## `commands`

位置: `drivers/fastboot/fb_command.c:54`  
source_hash: `sha256:1b19d903b83cfc85…`

（空表）

## `getvar_dispatch`

位置: `drivers/fastboot/fb_getvar.c:36`  
source_hash: `sha256:68ceb02e6d2af8c0…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"version"` | — | `getvar_version` | `drivers/fastboot/fb_getvar.c:19` | `c:fb_getvar.c@F@getvar_version` | — |
| `"version-bootloader"` | — | `getvar_version_bootloader` | `drivers/fastboot/fb_getvar.c:20` | `c:fb_getvar.c@F@getvar_version_bootloader` | — |
| `"downloadsize"` | — | `getvar_downloadsize` | `drivers/fastboot/fb_getvar.c:21` | `c:fb_getvar.c@F@getvar_downloadsize` | — |
| `"max-download-size"` | — | `getvar_downloadsize` | `drivers/fastboot/fb_getvar.c:21` | `c:fb_getvar.c@F@getvar_downloadsize` | — |
| `"serialno"` | — | `getvar_serialno` | `drivers/fastboot/fb_getvar.c:22` | `c:fb_getvar.c@F@getvar_serialno` | — |
| `"version-baseband"` | — | `getvar_version_baseband` | `drivers/fastboot/fb_getvar.c:23` | `c:fb_getvar.c@F@getvar_version_baseband` | — |
| `"product"` | — | `getvar_product` | `drivers/fastboot/fb_getvar.c:24` | `c:fb_getvar.c@F@getvar_product` | — |
| `"platform"` | — | `getvar_platform` | `drivers/fastboot/fb_getvar.c:25` | `c:fb_getvar.c@F@getvar_platform` | — |
| `"current-slot"` | — | `getvar_current_slot` | `drivers/fastboot/fb_getvar.c:26` | `c:fb_getvar.c@F@getvar_current_slot` | — |
| `"has-slot"` | — | `getvar_has_slot` | `drivers/fastboot/fb_getvar.c:27` | `c:fb_getvar.c@F@getvar_has_slot` | `IS_ENABLED(CONFIG_FASTBOOT_FLASH)` |
| `"partition-type"` | — | `getvar_partition_type` | `drivers/fastboot/fb_getvar.c:28` | `c:fb_getvar.c@F@getvar_partition_type` | `IS_ENABLED(CONFIG_FASTBOOT_FLASH_MMC)` |
| `"partition-size"` | — | `getvar_partition_size` | `drivers/fastboot/fb_getvar.c:29` | `c:fb_getvar.c@F@getvar_partition_size` | `IS_ENABLED(CONFIG_FASTBOOT_FLASH)` |
| `"is-userspace"` | — | `getvar_is_userspace` | `drivers/fastboot/fb_getvar.c:30` | `c:fb_getvar.c@F@getvar_is_userspace` | — |

## `altera_fpga`

位置: `drivers/fpga/altera.c:29`  
source_hash: `sha256:e98195db65829696…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `Altera_ACEX1K` | `0x1` | `CYC2_info` | `include/ACEX1K.h:17` | `c:@F@CYC2_info` | `defined(CONFIG_FPGA_CYCLON2)` |
| `Altera_CYC2` | `0x2` | `CYC2_info` | `include/ACEX1K.h:17` | `c:@F@CYC2_info` | `defined(CONFIG_FPGA_CYCLON2)` |
| `Altera_StratixII` | `0x3` | `StratixII_info` | `include/stratixII.h:11` | `c:@F@StratixII_info` | `defined(CONFIG_FPGA_STRATIX_II)` |
| `Altera_StratixV` | `0x4` | `stratixv_load` | `include/altera.h:120` | `c:@F@stratixv_load` | `defined(CONFIG_FPGA_STRATIX_V)` |

## `loading_handlers`

位置: `drivers/remoteproc/rproc-uclass.c:767`  
source_hash: `sha256:1aaf95fcf4179371…`

（空表）

## `ta_entries`

位置: `drivers/tee/sandbox.c:404`  
source_hash: `sha256:dad1c6322e74d9f4…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `TA_AVB_UUID` | — | `ta_avb_invoke_func` | `drivers/tee/sandbox.c:167` | `c:sandbox.c@F@ta_avb_invoke_func` | `CONFIG_OPTEE_TA_AVB` |
| `TA_RPC_TEST_UUID` | — | `ta_rpc_test_invoke_func` | `drivers/tee/sandbox.c:350` | `c:sandbox.c@F@ta_rpc_test_invoke_func` | `CONFIG_OPTEE_TA_RPC_TEST` |
| `PTA_SCP03_UUID` | — | `pta_scp03_invoke_func` | `drivers/tee/sandbox.c:117` | `c:sandbox.c@F@pta_scp03_invoke_func` | `CONFIG_OPTEE_TA_SCP03` |

## `dfu_state`

位置: `drivers/usb/gadget/f_dfu.c:586`  
source_hash: `sha256:7522ae4d8a3379ea…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `0` | `0` | `state_app_idle` | `drivers/usb/gadget/f_dfu.c:264` | `c:f_dfu.c@F@state_app_idle` | — |
| `1` | `1` | `state_app_detach` | `drivers/usb/gadget/f_dfu.c:291` | `c:f_dfu.c@F@state_app_detach` | — |
| `2` | `2` | `state_dfu_idle` | `drivers/usb/gadget/f_dfu.c:314` | `c:f_dfu.c@F@state_dfu_idle` | — |
| `3` | `3` | `state_dfu_dnload_sync` | `drivers/usb/gadget/f_dfu.c:382` | `c:f_dfu.c@F@state_dfu_dnload_sync` | — |
| `4` | `4` | `state_dfu_dnbusy` | `drivers/usb/gadget/f_dfu.c:405` | `c:f_dfu.c@F@state_dfu_dnbusy` | — |
| `5` | `5` | `state_dfu_dnload_idle` | `drivers/usb/gadget/f_dfu.c:425` | `c:f_dfu.c@F@state_dfu_dnload_idle` | — |
| `6` | `6` | `state_dfu_manifest_sync` | `drivers/usb/gadget/f_dfu.c:463` | `c:f_dfu.c@F@state_dfu_manifest_sync` | — |
| `7` | `7` | `state_dfu_manifest` | `drivers/usb/gadget/f_dfu.c:490` | `c:f_dfu.c@F@state_dfu_manifest` | — |
| `9` | `9` | `state_dfu_upload_idle` | `drivers/usb/gadget/f_dfu.c:516` | `c:f_dfu.c@F@state_dfu_upload_idle` | — |
| `10` | `10` | `state_dfu_error` | `drivers/usb/gadget/f_dfu.c:557` | `c:f_dfu.c@F@state_dfu_error` | — |

## `fstypes`

位置: `fs/fs.c:193`  
source_hash: `sha256:7197cb43791405e0…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `FS_TYPE_FAT` | `0x1` | `fat_rename` | `include/fat.h:234` | `c:@F@fat_rename` | `CONFIG_IS_ENABLED(FS_FAT)` |
| `FS_TYPE_EXT` | `0x2` | `fs_rename_unsupported` | `fs/fs.c:144` | `c:fs.c@F@fs_rename_unsupported` | `CONFIG_IS_ENABLED(FS_EXT4)` |
| `FS_TYPE_SANDBOX` | `0x3` | `fs_rename_unsupported` | `fs/fs.c:144` | `c:fs.c@F@fs_rename_unsupported` | `IS_ENABLED(CONFIG_SANDBOX) && !IS_ENABLED(CONFIG_XPL_BUILD)` |
| `FS_TYPE_BTRFS` | `0x5` | `fs_rename_unsupported` | `fs/fs.c:144` | `c:fs.c@F@fs_rename_unsupported` | `CONFIG_IS_ENABLED(FS_BTRFS)` |
| `FS_TYPE_SQUASHFS` | `0x6` | `fs_rename_unsupported` | `fs/fs.c:144` | `c:fs.c@F@fs_rename_unsupported` | `CONFIG_IS_ENABLED(FS_SQUASHFS)` |
| `FS_TYPE_EROFS` | `0x7` | `fs_rename_unsupported` | `fs/fs.c:144` | `c:fs.c@F@fs_rename_unsupported` | `CONFIG_IS_ENABLED(FS_EROFS)` |
| `FS_TYPE_EXFAT` | `0x9` | `exfat_fs_rename` | `include/exfat.h:23` | `c:@F@exfat_fs_rename` | `CONFIG_IS_ENABLED(FS_EXFAT)` |
| `FS_TYPE_ANY` | `0x0` | `fs_rename_unsupported` | `fs/fs.c:144` | `c:fs.c@F@fs_rename_unsupported` | — |

## `smbios_write_funcs`

位置: `lib/smbios.c:1994`  
source_hash: `sha256:3c531999e4084bf4…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"bios"` | — | `smbios_write_type0` | `lib/smbios.c:464` | `c:smbios.c@F@smbios_write_type0` | — |
| `"system"` | — | `smbios_write_type1` | `lib/smbios.c:523` | `c:smbios.c@F@smbios_write_type1` | — |
| `"baseboard"` | — | `smbios_write_type2` | `lib/smbios.c:571` | `c:smbios.c@F@smbios_write_type2` | — |
| `"chassis"` | — | `smbios_write_type3` | `lib/smbios.c:628` | `c:smbios.c@F@smbios_write_type3` | — |
| `"processor"` | — | `smbios_write_type4` | `lib/smbios.c:769` | `c:smbios.c@F@smbios_write_type4` | — |
| `{ smbios_write_type32, }` | — | `smbios_write_type32` | `lib/smbios.c:1961` | `c:smbios.c@F@smbios_write_type32` | — |
| `{ smbios_write_type127 }` | — | `smbios_write_type127` | `lib/smbios.c:1978` | `c:smbios.c@F@smbios_write_type127` | — |

## `configuration_table`

位置: `lib/zlib/deflate.c:132`  
source_hash: `sha256:9db76973f73d643b…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `0` | `0x0` | `deflate_stored` | `lib/zlib/deflate.c:78` | `c:deflate.c@F@deflate_stored` | `!(FASTEST)` |
| `4` | `0x4` | `deflate_fast` | `lib/zlib/deflate.c:79` | `c:deflate.c@F@deflate_fast` | `!(FASTEST)` |
| `4` | `0x4` | `deflate_fast` | `lib/zlib/deflate.c:79` | `c:deflate.c@F@deflate_fast` | `!(FASTEST)` |
| `4` | `0x4` | `deflate_fast` | `lib/zlib/deflate.c:79` | `c:deflate.c@F@deflate_fast` | `!(FASTEST)` |
| `4` | `0x4` | `deflate_slow` | `lib/zlib/deflate.c:81` | `c:deflate.c@F@deflate_slow` | `!(FASTEST)` |
| `8` | `0x8` | `deflate_slow` | `lib/zlib/deflate.c:81` | `c:deflate.c@F@deflate_slow` | `!(FASTEST)` |
| `8` | `0x8` | `deflate_slow` | `lib/zlib/deflate.c:81` | `c:deflate.c@F@deflate_slow` | `!(FASTEST)` |
| `8` | `0x8` | `deflate_slow` | `lib/zlib/deflate.c:81` | `c:deflate.c@F@deflate_slow` | `!(FASTEST)` |
| `32` | `0x20` | `deflate_slow` | `lib/zlib/deflate.c:81` | `c:deflate.c@F@deflate_slow` | `!(FASTEST)` |
| `32` | `0x20` | `deflate_slow` | `lib/zlib/deflate.c:81` | `c:deflate.c@F@deflate_slow` | `!(FASTEST)` |

## `function_table`

位置: `scripts/kconfig/preprocess.c:187`  
source_hash: `sha256:83b39497c37efcb3…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"error-if"` | — | `do_error_if` | `scripts/kconfig/preprocess.c:109` | `c:preprocess.c@F@do_error_if` | — |
| `"filename"` | — | `do_filename` | `scripts/kconfig/preprocess.c:117` | `c:preprocess.c@F@do_filename` | — |
| `"info"` | — | `do_info` | `scripts/kconfig/preprocess.c:122` | `c:preprocess.c@F@do_info` | — |
| `"lineno"` | — | `do_lineno` | `scripts/kconfig/preprocess.c:129` | `c:preprocess.c@F@do_lineno` | — |
| `"shell"` | — | `do_shell` | `scripts/kconfig/preprocess.c:138` | `c:preprocess.c@F@do_shell` | — |
| `"warning-if"` | — | `do_warning_if` | `scripts/kconfig/preprocess.c:178` | `c:preprocess.c@F@do_warning_if` | — |

## `function_table`

位置: `scripts/kconfig/preprocess.c:187`  
source_hash: `sha256:83b39497c37efcb3…`

| msg_id | 值 | handler | handler 位置 | USR | 编译条件 |
|---|---|---|---|---|---|
| `"error-if"` | — | `do_error_if` | `scripts/kconfig/preprocess.c:109` | `c:preprocess.c@F@do_error_if` | — |
| `"filename"` | — | `do_filename` | `scripts/kconfig/preprocess.c:117` | `c:preprocess.c@F@do_filename` | — |
| `"info"` | — | `do_info` | `scripts/kconfig/preprocess.c:122` | `c:preprocess.c@F@do_info` | — |
| `"lineno"` | — | `do_lineno` | `scripts/kconfig/preprocess.c:129` | `c:preprocess.c@F@do_lineno` | — |
| `"shell"` | — | `do_shell` | `scripts/kconfig/preprocess.c:138` | `c:preprocess.c@F@do_shell` | — |
| `"warning-if"` | — | `do_warning_if` | `scripts/kconfig/preprocess.c:178` | `c:preprocess.c@F@do_warning_if` | — |

## 解析失败文件

- `/home/runner/work/u-boot/u-boot/api/api.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arc/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/arm926ejs/mxs/spl_power_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv7/bcm281xx/clk-bcm281xx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv7/bcm281xx/clk-core.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv7/ls102xa/ls102xa_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv7/ls102xa/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/cache_v8.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1012a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1028_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1028a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1043_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1043a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1046_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1046a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1088_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls1088a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls2080a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/ls2088_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/lx2160_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/cpu/armv8/fsl-layerscape/lx2160a_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/arch-apple/rtkit.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/arch-ls102xa/ls102xa_devdis.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/arch-mxs/sys_proto.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/arch-rockchip/f_rockusb.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/arch-rockchip/sdram_rk3328.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/arch-tegra/ivc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/mach-imx/mxc_i2c.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/mach-imx/sys_proto.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/omap_common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/omap_musb.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/processor.h`
- `/home/runner/work/u-boot/u-boot/arch/arm/include/asm/setup.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/lib/cmd_boot.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/lib/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-airoha/an7581/init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-apple/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-apple/sart.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-aspeed/ast2700/arm64-mmu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-aspeed/ast2700/cpu-info.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcm283x/init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm4908/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm4912/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm63146/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm63158/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm6813/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm6856/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-bcmbca/bcm6858/mmu_table.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-exynos/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-exynos/include/mach/gpio.h`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-exynos/include/mach/mipi_dsim.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-exynos/mmu-arm64.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-exynos/power.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-exynos/spl_boot.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-histb/sysmap-histb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx8m/clock_imx8mm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx8m/clock_imx8mq.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx8m/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx8ulp/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx8ulp/upower/upower_api.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx9/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx9/scmi/fdt.c`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx9/scmi/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/imx9/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/mx7/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-imx/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/am62ax/am62a7_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/am62px/am62p5_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/am62x/am625_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/am64x/am642_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/arm64/arm64-mmu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/r5/common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/r5/sysfw-loader.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-k3/sysfw-loader.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-keystone/cmd_mon.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mediatek/armv8-mem-map.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-meson/board-a1.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-meson/board-axg.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-meson/board-g12a.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-meson/board-gx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mmp/mmu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/alleycat5/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/alleycat5/soc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/armada3700/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/armada8k/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/armada8k/soc_info.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/serdes/a38x/high_speed_env_spec-38x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/serdes/a38x/high_speed_env_spec.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/serdes/a38x/seq_exec.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-mvebu/serdes/axp/high_speed_env_spec.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-npcm/npcm8xx/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-octeontx/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-octeontx2/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-omap2/am33xx/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-omap2/boot-common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-omap2/emif-common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-omap2/omap3/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-omap2/omap3/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-omap2/omap5/sdram.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-owl/sysmap-owl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-renesas/memmap-gen3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-renesas/memmap-rzg2l.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/px30/px30.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3308/rk3308.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3328/rk3328.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3368/rk3368.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3399/rk3399.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3528/rk3528.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3568/rk3568.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3576/rk3576.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-rockchip/rk3588/rk3588.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-sc5xx/sc59x_64.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-snapdragon/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-socfpga/include/mach/altera-sysmgr.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-socfpga/mmu-arm64_s10.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-socfpga/reset_manager_arria10.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/cmd_stm32key.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/cmd_stm32prog/stm32prog_serial.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/cmd_stm32prog/stm32prog_usb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/ecdsa_romapi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/stm32mp1/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/stm32mp2/arm64-mmu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-stm32mp/tamp_nvram.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-sunxi/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-sunxi/dram_sun4i.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-sunxi/dram_sunxi_dw.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/arm64-mmu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/ivc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/tegra114/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/tegra124/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/tegra20/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/tegra210/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/tegra30/clock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-tegra/xusb-padctl-common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/arm64/mem_map.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/board_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/boot-device/boot-device-ld11.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/boot-device/boot-device-ld4.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/boot-device/boot-device-pro5.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/boot-device/boot-device-pxs2.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/boot-device/boot-device-pxs3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/boot-device/boot-device.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/dram/cmd_ddrmphy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/dram/cmd_ddrphy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/dram_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-uniphier/spl_board_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-versal-net/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-versal/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-versal2/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/arm/mach-zynqmp/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/m68k/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/microblaze/cpu/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/microblaze/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/include/asm/processor.h`
- `/home/runner/work/u-boot/u-boot/arch/mips/lib/boot.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/lib/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-jz47xx/jz4780/jz4780.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-mtmips/mt7620/init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-mtmips/mt7621/tpl/tpl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/bootoctlinux.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-bootmem.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper-bgx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper-cfg.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper-pki.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper-pko.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper-sfp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper-util.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-helper.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/cvmx-pko3-queue.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-bootmem.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-error.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-helper-board.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-helper-fdt.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-helper-gpio.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-helper-pko.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-helper-sfp.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/cvmx-helper.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/octeon_eth.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/include/mach/octeon_fdt.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/mips/mach-octeon/octeon_fdt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/nios2/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc83xx/cpu_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc83xx/spd_sdram.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc83xx/traps.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/b4860_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/b4860_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/bsc9132_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/c29x_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/cpu_init_early.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/mp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/mpc8536_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/mpc8544_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/mpc8548_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p1010_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p1021_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p1023_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p2020_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p2041_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p2041_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p3041_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p3041_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p4080_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p4080_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p5040_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/p5040_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t1024_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t1024_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t1040_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t1040_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t2080_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t2080_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t4240_ids.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/t4240_serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/cpu/mpc85xx/traps.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/include/asm/cpm_8xx.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/powerpc/lib/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/cpu/andes/cache.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/include/asm/cpufeature.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/include/asm/smp.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/lib/boot.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/lib/cache.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/lib/smp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/riscv/lib/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/sh/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/sh/lib/zimageboot.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/apollolake/cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/broadwell/northbridge.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/broadwell/refcode.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/intel_common/me_status.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/intel_common/mrc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/intel_common/report_platform.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/cpu/turbo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/arch-broadwell/pei_data.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/arch-ivybridge/pei_data.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/arch-quark/mrc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/fsp/fsp_api.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/fsp1/fsp_api.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/fsp2/fsp_api.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/include/asm/sfi.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/acpi_s3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/bios.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/bios.h`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/bootm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/cmd_boot.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/fsp/fsp_graphics.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/x86/lib/tables.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/arch/xtensa/cpu/exceptions.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/CZ.NIC/turris_1x/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/CZ.NIC/turris_1x/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/CZ.NIC/turris_omnia/turris_omnia.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/Marvell/db-88f6820-amc/db-88f6820-amc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/Marvell/db-88f6820-gp/db-88f6820-gp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/Marvell/octeontx2/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/Synology/ds116/ds116.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/advantech/som-db5800-som-6867/som-db5800-som-6867.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/alliedtelesis/x530/x530.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/altera/arria5-socdk/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/altera/arria5-socdk/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/altera/cyclone5-socdk/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/altera/cyclone5-socdk/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/aries/mcvevk/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/aries/mcvevk/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/aristainetos/aristainetos.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/armltd/corstone1000/corstone1000.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/armltd/total_compute/total_compute.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/armltd/vexpress64/vexpress64.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/axiado/scm3005/scm3005.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/beckhoff/mx53cx9020/mx53cx9020_video.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/bluewater/gurnard/splash_logo.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/boundary/nitrogen6x/nitrogen6x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/broadcom/bcmns3/ns3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/cavium/thunderx/thunderx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/compulab/common/omap3_smc911x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/corecourse/ac501soc/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/corecourse/ac501soc/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/corecourse/ac550soc/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/corecourse/ac550soc/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/cortina/presidio-asic/presidio.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/cssi/cmpc885/sdram.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/cssi/cmpcpro/cmpcpro.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/cssi/mcr3000/mcr3000.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/devboards/dbm-soc1/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/devboards/dbm-soc1/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/dhelectronics/dh_imx8mp/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ebv/socrates/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ebv/socrates/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/embest/mx6boards/mx6boards.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/emulation/qemu-arm/qemu-arm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/emulation/qemu-sbsa/acpi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/emulation/qemu-sbsa/qemu-sbsa.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/engicam/imx6q/imx6q.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/friendlyarm/nanopi2/nxp-fb.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/gateworks/gw_ventana/gw_ventana.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/gdsys/a38x/controlcenterdc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/gdsys/a38x/hre.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ge/b1x5v2/b1x5v2.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ge/bx50v3/bx50v3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ge/common/vpd_reader.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ge/common/vpd_reader.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ge/mx53ppd/mx53ppd_video.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/hisilicon/hikey/hikey.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/hisilicon/hikey960/hikey960.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/hisilicon/poplar/poplar.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/is1/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/is1/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/keymile/common/common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/keymile/kmcent2/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/keymile/kmcent2/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/keymile/secu1/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/keymile/secu1/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/kobol/helios4/helios4.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/kosagi/novena/video.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/liebherr/display5/display5.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/logicpd/imx6/imx6logic.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/logicpd/omap3som/omap3logic.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/menlo/m53menlo/m53menlo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nvidia/dalmore/pinmux-config-dalmore.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/common/arm_sleep.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/common/fman.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/common/fsl_chain_of_trust.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/common/mpc85xx_sleep.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/common/p_corenet/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/common/p_corenet/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/ls1021atsn/ls1021atsn.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/ls1021atwr/ls1021atwr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/lx2160a/lx2160a.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/mpc8548cds/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/mpc8548cds/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/mx6sabreauto/mx6sabreauto.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/mx6sabresd/mx6sabresd.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/p1010rdb/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/p1010rdb/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/p1_p2_rdb_pc/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/p1_p2_rdb_pc/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t102xrdb/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t102xrdb/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t104xrdb/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t104xrdb/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t208xqds/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t208xqds/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t208xrdb/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t208xrdb/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t4rdb/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/nxp/t4rdb/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/phytium/durian/durian.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/phytium/pe2201/pe2201.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/phytium/pomelo/pomelo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/raspberrypi/rpi/rpi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/renesas/common/gen4-common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/renesas/common/rcar64-spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/samsung/exynos-mobile/exynos-mobile.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/sielaff/imx6dl-sielaff/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/siemens/iot2050/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/socionext/developerbox/developerbox.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/socrates/law.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/socrates/tlb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/socrates/upm_table.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/softing/vining_fpga/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/softing/vining_fpga/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/solidrun/clearfog/clearfog.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/solidrun/mx6cuboxi/mx6cuboxi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/spacemit/k1/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/sr1500/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/sr1500/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/synopsys/axs10x/axs10x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/synopsys/hsdk/env-lib.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/synopsys/hsdk/env-lib.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/synopsys/hsdk/hsdk.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/tbs/tbs2910/tbs2910.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/technexion/pico-imx6/pico-imx6.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de0-nano-soc/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de0-nano-soc/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de1-soc/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de1-soc/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de10-nano/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de10-nano/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de10-standard/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/de10-standard/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/sockit/qts/iocsr_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/terasic/sockit/qts/pinmux_config.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/thecus/n2350/n2350.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/am57xx/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/am64x/evm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/am65x/evm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/common/cape_detect.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/dra7xx/evm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/j721e/evm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/ti/j721s2/evm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/toradex/apalis_imx6/apalis_imx6.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/toradex/colibri_imx6/colibri_imx6.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/toradex/common/tdx-cfg-block.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/tq/tqma6/tqma6_emmc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/wandboard/wandboard.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/xilinx/versal/board.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/board/xilinx/zynqmp/zynqmp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/cmd/ini.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/cmd/mvebu/bubt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/cmd/ti/pd.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/bouncebuf.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/cli_hush_upstream.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/kgdb_stubs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/spl/spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/spl/spl_atf.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/spl/spl_opensbi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/spl/spl_reloc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/common/usb_onboard_hub.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/adc/rockchip-saradc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ata/sata_sil.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/bios_emulator/atibios.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/bios_emulator/x86emu/debug.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/bios_emulator/x86emu/decode.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/bios_emulator/x86emu/ops.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/bios_emulator/x86emu/prim_ops.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/button/button-qcom-pmic.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/altera/clk-arria10.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/aspeed/clk_ast2600.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/aspeed/clk_ast2700.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/at91/sam9x60.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/at91/sam9x7.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/at91/sama7d65.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/at91/sama7g5.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/clk-hsdk-cgu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/clk_versal.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/exynos/clk.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/imx/clk-fracn-gppll.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/imx/clk-imx6q.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/imx/clk-imx8mp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/imx/clk-pll14xx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt7623.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt8183.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt8188.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt8189.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt8195.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt8365.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mediatek/clk-mt8518.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/microchip/mpfs_clk_cfg.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mtmips/clk-mt7621.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/mvebu/armada-37xx-periph.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-milos.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-qcm2290.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-qcom.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-qcs615.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sa8775p.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sc7280.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sdm845.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm6115.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm6125.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm6350.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm7150.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm8150.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm8250.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm8550.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-sm8650.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/qcom/clock-x1e80100.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/clk-rcar-gen2.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/clk-rcar-gen3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a774a1-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a774b1-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a774c0-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a774e1-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a7790-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a7791-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a7792-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a7794-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a7795-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a7796-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a77965-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a77970-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a77980-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a77990-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a77995-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a779a0-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a779f0-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a779g0-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a779h0-cpg-mssr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r8a78000-cpg.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/r9a07g044-cpg.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/rcar-cpg-lib.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/renesas/renesas-cpg-mssr.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/sifive/sifive-prci.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/spacemit/clk-k1.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/spacemit/clk_common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/starfive/clk-jh7110-pll.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/starfive/clk-jh7110.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/stm32/clk-stm32-core.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/stm32/clk-stm32f.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/stm32/clk-stm32h7.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/stm32/clk-stm32mp13.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/clk/ti/omap4-cm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/cpu/bmips_cpu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/crypto/fsl/jr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/crypto/fsl/jr.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/crypto/hash/hash_sw.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/crypto/nuvoton/npcm_sha.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/altera/sdram_arria10.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/fsl/ctrl_regs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/fsl/ddr1_dimm_params.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/fsl/ddr2_dimm_params.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/fsl/main.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_debug.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_patterns_64bit.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_training.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_training_db.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_training_hw_algo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_training_ip_engine.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_training_ip_prv_if.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/ddr3_training_leveling.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/mv_ddr4_training_db.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/mv_ddr4_training_leveling.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/mv_ddr_plat.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_a38x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_debug.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_patterns_64bit.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training_db.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training_hw_algo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training_ip_engine.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training_ip_prv_if.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training_leveling.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/a38x/old/ddr3_training_static.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ddr/marvell/axp/ddr3_patterns_64bit.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-am62.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-am62a.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-am62p.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-am64.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-am654.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-j721e.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-j721s2.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/dma/ti/k3-psil-j784s4.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/firmware/arm-ffa/arm-ffa.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/fpga/intel_sdm_mb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/gpio/gpio-aspeed-sgpio.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/gpio/omap_gpio.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/i2c/fsl_i2c.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/i2c/geni_i2c.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/i2c/mxc_i2c.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/i2c/ocores_i2c.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/i2c/omap24xx_i2c.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/input/apple_spi_kbd.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/iommu/apple_dart.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mailbox/imx-mailbox.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/memory/stm32-fmc2-ebi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/misc/imx_ele/fuse.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/misc/k3_avs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/misc/rockchip-efuse.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/misc/rockchip-io-domain.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/misc/rockchip-otp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/bcmstb_sdhci.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/f_sdh30.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/fsl_esdhc_spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/gen_atmel_mci.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/mxsmmc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/octeontx_hsmmc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/omap_hsmmc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/renesas-sdhi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/rockchip_sdhci.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mmc/tmio-common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/jedec_flash.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/am335x_spl_bch.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/atmel/nand-controller.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/atmel_nand.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/brcmnand/brcmnand.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/denali.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/fsl_elbc_spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/fsl_ifc_spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/mxc_nand_spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/nand_spl_load.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/nand_spl_simple.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/rockchip_nfc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/raw/stm32_fmc2_nand.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/alliancememory.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/ato.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/esmt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/fmsh.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/foresee.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/gigadevice.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/macronix.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/micron.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/paragon.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/skyhigh.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/toshiba.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/winbond.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/nand/spi/xtx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/onenand/samsung.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/spi/fsl_espi_spl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/ubi/crc32table.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/mtd/ubi/ubi.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/airoha/pcs-airoha-common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/airoha/pcs-airoha.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/altera_tse.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/bnxt/bnxt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/dm9000x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/dwc_eth_qos.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/dwc_eth_qos_rockchip.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/dwc_eth_xgmac.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/dwmac_meson8b.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/essedma.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/fec_mxc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/fm/fm.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/fsl_enetc_netc_blk_ctrl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/gmac_rockchip.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/hifemac.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/ksz9477.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/macb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/mscc_eswitch/luton_switch.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/mscc_eswitch/ocelot_switch.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/mscc_eswitch/serval_switch.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/mtk_eth/mt753x.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/mtk_eth/mtk_eth.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/phy/marvell10g.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/phy/mscc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/phy/ncsi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/ravb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/sja1105.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/sni_ave.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/ti/cpsw.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/ti/davinci_emac.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/net/ti/icssg_config.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pci/pcie_brcmstb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pci/pcie_dw_imx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pci/pcie_dw_qcom.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pci/pcie_iproc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pci/pcie_layerscape_fixup_common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/cadence/phy-cadence-sierra.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/cadence/phy-cadence-torrent.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/marvell/comphy_core.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/omap-usb2-phy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/phy-bcm-sr-pcie.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/phy-mtk-tphy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/phy-mtk-ufs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/phy-mtk-xsphy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/phy-ti-am654.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/qcom/phy-qcom-qmp-combo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/qcom/phy-qcom-qmp-pcie.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/qcom/phy-qcom-qusb2.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/renesas/r8a779f0-ether-serdes.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/renesas/r8a78000-ether-pcs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/rockchip/phy-rockchip-inno-dsidphy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/rockchip/phy-rockchip-inno-hdmi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/rockchip/phy-rockchip-naneng-combphy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/rockchip/phy-rockchip-snps-pcie3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/rockchip/phy-rockchip-usbdp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/phy/ti-pipe3-phy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/airoha/pinctrl-an7581.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/airoha/pinctrl-an7583.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/airoha/pinctrl-en7523.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/aspeed/pinctrl_ast2700_soc1.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/intel/pinctrl_apl.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/mediatek/pinctrl-mt7623.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/mediatek/pinctrl-mt8365.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/mediatek/pinctrl-mtk-common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/mtmips/pinctrl-mt7621.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/mtmips/pinctrl-mt7628.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/pinctrl-at91.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/qcom/pinctrl-qcom.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a7791.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a7792.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a7794.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a77951.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a7796.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a77965.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a77970.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a77980.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a77990.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/pfc-r8a77995.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/renesas/sh_pfc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/rockchip/pinctrl-rockchip.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/spacemit/pinctrl-k1.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/starfive/pinctrl-starfive.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pinctrl/tegra/funcmux-tegra20.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/domain/meson-ee-pwrc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/domain/qcom-rpmhpd.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/domain/renesas-r8a78000-power-domain.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/domain/ti-omap-prm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/pmic/mtk-pwrap.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/regulator/anatop_regulator.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/regulator/axp_regulator.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/regulator/max8907_regulator.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/regulator/qcom-rpmh-regulator.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/power/regulator/tps65941_regulator.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/pwm/sunxi_pwm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/aspeed/sdram_ast2700.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/bmips_ram.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/k3-ddrss/lpddr4_am6x.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/k3-ddrss/lpddr4_if.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/k3-ddrss/lpddr4_obj_if.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/octeon/octeon3_lmc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/renesas/dbsc5/qos.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/renesas/dbsc5/r8a779g0-dram.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/renesas/dbsc5/r8a78000-dram.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/dmc-rk3368.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/sdram_px30.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/sdram_rk3066.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/sdram_rk3188.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/sdram_rk3288.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/sdram_rk3399.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/rockchip/sdram_rv1126.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/stm32mp1/stm32mp1_ddr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/stm32mp1/stm32mp1_tests.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ram/sunxi/dram_sun20i_d1.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/remoteproc/imx_rproc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/remoteproc/ipu_rproc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/reset/reset-airoha.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/reset/reset-hsdk.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/reset/stm32/stm32-reset-core.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/rng/exynos-trng.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/rng/meson-rng.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/rng/rockchip_rng.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/rng/smccc_trng.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/rtc/davinci.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/serial/serial_msm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/serial/serial_mtk.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/serial/serial_omap.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/smem/msm_smem.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/soc/samsung/exynos-pmu.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/soc/soc_ti_k3.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/soc/ti/k3-navss-ringacc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/sound/max98088.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/sound/max98095.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/atmel-quadspi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/bcm63xx_spi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/cadence_xspi.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/designware_spi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/fsl_dspi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/omap3_spi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/pic32_spi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/spi-aspeed-smc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/stm32_ospi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/spi/stm32_qspi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/sysreset/sysreset_mpc83xx.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/sysreset/sysreset_sbi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/timer/omap-timer.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/timer/tsc_timer.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/tpm/tpm_tis.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/ufs/ufs.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/cdns3/cdns3-ti.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/common/fsl-dt-fixup.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/dwc3/dwc3-am62.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/dwc3/dwc3-generic.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/dwc3/dwc3-meson-g12a.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/dwc3/ti_usb_phy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/asix.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/asix88179.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/lan75xx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/lan78xx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/mcs7830.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/r8152.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/r8152.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/eth/smsc95xx.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/at91_udc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/dwc2_udc_otg.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/f_mass_storage.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/f_rockusb.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/f_sdp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rcar/fifo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rcar/fifo.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rcar/mod_gadget.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rcar/pipe.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rcar/pipe.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rndis.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/gadget/rndis.h`
- `/home/runner/work/u-boot/u-boot/drivers/usb/host/ehci-omap.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/host/ehci.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/musb-new/musb_core.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/musb-new/musb_dma.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/musb-new/omap2430.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/tcpm/fusb302.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/usb/tcpm/tcpm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/dw_hdmi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/exynos/exynos_mipi_dsi_common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/ilitek-ili9806e.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/imx/ipu.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/lm3532_backlight.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/lp855x_backlight.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/meson/meson_vpu_init.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/nexell/soc/s5pxx18_soc_dpc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/nexell/soc/s5pxx18_soc_mlc.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/nexell_display.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/rockchip/dw_mipi_dsi_rockchip.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/rockchip/rk_hdmi.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/rockchip/rk_vop.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/video/stm32/stm32_lvds.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/watchdog/omap_wdt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/watchdog/orion_wdt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/watchdog/sunxi_wdt.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/xen/events.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/drivers/xen/pvblock.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/examples/standalone/sched.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/fs/jffs2/jffs2_private.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/fs/jffs2/mini_inflate.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/fs/ubifs/super.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/fs/ubifs/ubifs.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/fs/zfs/zfs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/ahci.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/api_public.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/cadence-nand.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/cpsw.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/dw_hdmi.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/dwmmc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/eeprom_field.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/eeprom_layout.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/fsl_ddr.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/fsl_ddr_sdram.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/imximage.h`
- `/home/runner/work/u-boot/u-boot/include/interconnect-uclass.h`
- `/home/runner/work/u-boot/u-boot/include/jffs2/mini_inflate.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/k3_bist.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/arm-smccc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/asn1_ber_bytecode.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/fb.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/kref.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/mtd/spinand.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/mtd/ubi.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/posix_types.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/psci.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/soc/ti/ti_sci_protocol.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/usb/musb.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/usb/usb_urb_compat.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/linux/zstd_lib.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/mxs_nand.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/net-legacy.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/net/tcp.h`
- `/home/runner/work/u-boot/u-boot/include/netdev.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/p2sb.h`
- `/home/runner/work/u-boot/u-boot/include/pci_rom.h`
- `/home/runner/work/u-boot/u-boot/include/power/acpi_pmc.h`
- `/home/runner/work/u-boot/u-boot/include/power/cpcap.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/power/pmic_legacy.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/spi-mem.h`
- `/home/runner/work/u-boot/u-boot/include/test/fuzz.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/ubispl.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/uboot_aes.h`
- `/home/runner/work/u-boot/u-boot/include/usb/dwc2_udc.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/usb/tcpm.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/usbdevice.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/video_osd.h`
- `/home/runner/work/u-boot/u-boot/include/xen/events.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/zfs_common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/include/zynqmp_firmware.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/crc7.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/efi_client/efi_stub.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/libavb/avb_ops.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/contrib/apps/shell/shell.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/contrib/examples/snmp/snmp_private_mib/lwip_prvmib.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/contrib/examples/snmp/snmp_v3/snmpv3_dummy.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/contrib/ports/unix/port/netif/list.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/api/err.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/smtp/smtp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/snmp/snmp_core_priv.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/snmp/snmp_mib2_interfaces.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/snmp/snmp_mib2_ip.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/snmp/snmp_mib2_tcp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/snmp/snmp_mib2_udp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/apps/snmp/snmp_snmpv2_usm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/core/tcp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/acd.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/altcp.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/api.h`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/fs.h`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/http_client.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/httpd.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/lwiperf.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/mdns.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/mqtt.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/smtp.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/snmp.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/snmp_core.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/snmp_scalar.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/snmp_table.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/snmp_threadsync.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/apps/tftp_common.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/dns.h`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/netif.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/pbuf.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/priv/altcp_priv.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/priv/api_msg.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/priv/tcpip_priv.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/raw.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/sys.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/tcp.h`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/tcpip.h`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/timeouts.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/lwip/udp.h`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/netif/ppp/chap-new.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/netif/ppp/ppp.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/netif/ppp/ppp_impl.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/include/netif/ppp/pppos.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/auth.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/ccp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/chap-new.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/eap.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/ecp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/ipcp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/ipv6cp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/lcp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/multilink.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/upap.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/src/netif/ppp/utils.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/test/fuzz/fuzz_common.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lwip/lwip/test/unit/arch/sys_arch.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lzma/7zTypes.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/lzma/Compiler.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/oid_registry_data.c`
- `/home/runner/work/u-boot/u-boot/lib/sscanf.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/tiny-printf.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/lib/zlib/deflate.c`
- `/home/runner/work/u-boot/u-boot/net/lwip/net-lwip.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/andi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/cmp.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/cmpi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/cr.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/load.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/rlwimi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/rlwinm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/rlwnm.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/srawi.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/store.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/three.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/threei.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/threex.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/two.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/post/lib_powerpc/twox.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/scripts/dtc/checks.c`
- `/home/runner/work/u-boot/u-boot/scripts/dtc/dtc-parser.tab.c`
- `/home/runner/work/u-boot/u-boot/scripts/dtc/flattree.c`
- `/home/runner/work/u-boot/u-boot/scripts/dtc/libfdt/fdt_strerror.c`
- `/home/runner/work/u-boot/u-boot/scripts/dtc/pylibfdt/libfdt_wrap.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/confdata.c`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/expr.c`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/lkc_proto.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/lxdialog/dialog.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/nconf.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/preprocess.c`
- `/home/runner/work/u-boot/u-boot/scripts/kconfig/zconf.tab.c`
- `/home/runner/work/u-boot/u-boot/test/image/spl_load.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/test/image/spl_load_fs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/aisimage.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/asn1_compiler.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/bmp_logo.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/fdtgrep.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/gdb/serial.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/ifwitool.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/imagetool.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/imximage.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/mips-relocs.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/mxsimage.h: compile_commands.json 中无此文件，也未找到包含它的 TU`
- `/home/runner/work/u-boot/u-boot/tools/zynqmpbif.c: compile_commands.json 中无此文件，也未找到包含它的 TU`
