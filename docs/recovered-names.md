# Recovered names

Recovered original function names mapped onto this repository's configured units by address.
Reference data only; names are cfront-mangled C++ symbols and are not used by the build.

The recovered symbol list is grouped by original source file. The next symbol in the same file bounds the recovered extent,
which tells us whether one of our configured units is the whole recovered function or only a fragment of it.

| Match | Count | Meaning |
| :--- | ---: | :--- |
| `full` | 103 | our unit is exactly the recovered function |
| `fragment` | 206 | the recovered function starts at our unit and continues past it |
| `entry_size_unknown` | 42 | recovered function starts at our unit; last symbol in its source-file group |
| `no_unit` | 43 | recovered symbol is not inside a configured non-matching C unit |

## Whole-function matches

Our configured unit has the same start and size as the recovered function (103).

| Unit | Address | Recovered name | Original file |
| :--- | :--- | :--- | :--- |
| `assembly/ee/dma_to_spr` | 0x20b3c0 | `DmaToSpr` | miscproc |
| `assembly/ee/set_background_color` | 0x1fb280 | `SetBackgroundColor__Fiii` | game/framebuf.cpp |
| `assembly/math/fast_count_chars` | 0x1f9d98 | `FastCountChars__FPvi` | fastfunc.s |
| `assembly/sdk/library/entry` | 0x12d728 | `_start` |  |
| `assembly/textbin/attach_manipulator` | 0x20cb10 | `AttachManipulator` | mobyfunc |
| `assembly/textbin/audio_dec_begin_put` | 0x23ad58 | `audioDecBeginPut__FP9_AudioDecPPUcPiT1T2` | movie/audiodec.cpp |
| `assembly/textbin/audio_dec_start` | 0x23acb8 | `audioDecStart` | movie/audiodec.cpp |
| `assembly/textbin/build_occl_visibility` | 0x1f2820 | `BuildOcclVisibility__Fv` | game/initonce.cpp |
| `assembly/textbin/build_tfrag_texture_dma` | 0x234d48 | `BuildTfragTextureDma` | game/initonce.cpp |
| `assembly/textbin/camera_handle_coll_with_hero` | 0x1ebe68 | `Camera_handleCollWithHero__FiP9UpdateCam` | camera |
| `assembly/textbin/create_moby` | 0x20c4f8 | `CreateMoby__Fi` | mobyfunc |
| `assembly/textbin/create_point_light` | 0x201ba8 | `CreatePointLight` | lights |
| `assembly/textbin/dma_moby_textures` | 0x20cdf0 | `DmaMobyTextures` | game/initonce.cpp |
| `assembly/textbin/dma_to_spr_sync` | 0x20b3e0 | `DmaToSprSync` | miscproc |
| `assembly/textbin/dmac_vif1_enable` | 0x233d00 | `DMAC_VIF1_Enable__Fv` | vuchain.cpp |
| `assembly/textbin/draw_moby_list` | 0x20d330 | `DrawMobyList` | mobyfunc |
| `assembly/textbin/draw_mobys_setup` | 0x20d278 | `DrawMobysSetup__Fv` | mobyfunc |
| `assembly/textbin/draw_shrubs` | 0x228b38 | `DrawShrubs` | game/shrub something |
| `assembly/textbin/draw_ties_1` | 0x2358c8 | `DrawTies_1` | tiefunc |
| `assembly/textbin/fast_add_rots` | 0x1fa580 | `FastAddRots__Fff` | fastfunc.s |
| `assembly/textbin/fast_arc_sin` | 0x1f9df8 | `FastArcSin__Ff` | fastfunc.s |
| `assembly/textbin/fast_cos` | 0x1f9dc8 | `FastCos` | fastfunc.s |
| `assembly/textbin/fast_dec_timer` | 0x1f9740 | `FastDecTimer__FRi` | fastfunc.s |
| `assembly/textbin/fast_draw_quad_real` | 0x1f7d30 | `FastDrawQuadReal` | drawquad |
| `assembly/textbin/fast_normalize_angle` | 0x1fa610 | `FastNormalizeAngle` | fastfunc.s |
| `assembly/textbin/fast_sin` | 0x1f9de0 | `FastSin__Ff` | fastfunc.s |
| `assembly/textbin/fast_sub_rots` | 0x1fa5c8 | `FastSubRots__Fff` | fastfunc.s |
| `assembly/textbin/fast_tween_color` | 0x1fa6e0 | `FastTweenColor` | fastfunc.s |
| `assembly/textbin/fast_vec_cross` | 0x1f9ad8 | `FastVecCross` | fastfunc.s |
| `assembly/textbin/fast_vec_dot` | 0x1f9ab0 | `FastVecDot` | fastfunc.s |
| `assembly/textbin/fast_vector_from_packed_chars` | 0x1f9d50 | `FastVectorFromPackedChars__FR4vec4i` | fastfunc.s |
| `assembly/textbin/font_print` | 0x1f62b0 | `FontPrint` | fonts.cpp // |
| `assembly/textbin/hud_send_resident_bank` | 0x1ff128 | `Hud_SendResidentBank__FiPcb` | hud.cpp |
| `assembly/textbin/init_mem_slots` | 0x2015d8 | `InitMemSlots__Fv` | game/initonce.cpp |
| `assembly/textbin/init_moby_instance` | 0x20c5f0 | `InitMobyInstance__FP12MobyInstancei` | mobyfunc |
| `assembly/textbin/load_pif_as_psmt8_h` | 0x1e9168 | `LoadPifAsPSMT8H` | bloaders |
| `assembly/textbin/memcard_init` | 0x20ac58 | `memcard_Init` | game/initonce.cpp |
| `assembly/textbin/memcard_make_whole_save` | 0x20abb0 | `memcard_MakeWholeSave` | game/initonce.cpp |
| `assembly/textbin/memcard_prep_data` | 0x20ad78 | `memcard_PrepData` | game/initonce.cpp |
| `assembly/textbin/moby_anim_proc` | 0x211728 | `MobyAnimProc` | mobyproc |
| `assembly/textbin/mode_freeze_init` | 0x1fbab8 | `mode_freezeInit` | game/freeze.cpp |
| `assembly/textbin/mpeg_error` | 0x23d080 | `mpegError__FP7sceMpegP18sceMpegCbDataErrorPv` | movie/videodec.cpp |
| `assembly/textbin/music_stop` | 0x215ee8 | `music_Stop__Fv` | music.cpp |
| `assembly/textbin/music_update_stream` | 0x2160a8 | `music_UpdateStream__FR13music_Playing` | music.cpp |
| `assembly/textbin/obtain_all_gold_weapons_menu` | 0x222948 | `ObtainAllGoldWeaponsMenu` | game/pause.cpp |
| `assembly/textbin/part_proc` | 0x217c18 | `PartProc` | game/initonce.cpp |
| `assembly/textbin/process_pad_input` | 0x217328 | `ProcessPadInput__FR3PADPUci` | pad.cpp |
| `assembly/textbin/read_buf_begin_get` | 0x23b9d8 | `readBufBeginGet__FP7ReadBufPPUc` | movie/readbuf.cpp |
| `assembly/textbin/read_mpeg` | 0x23a460 | `readMpeg__FP8VideoDecP7ReadBufP7StrFile` | movie/movie.cpp |
| `assembly/textbin/saving_data_menu` | 0x222f88 | `SavingDataMenu` | game/pause.cpp |
| `assembly/textbin/send_to_spu` | 0x23af18 | `sendToSPU__FP9_AudioDecPUcii` | movie/audiodec.cpp |
| `assembly/textbin/set_pal_mode` | 0x1f34e8 | `SetPalMode__Fi` | game/initonce.cpp |
| `assembly/textbin/set_tfrag_dists` | 0x233068 | `SetTfragDists__Fv` | tfragfunc.cpp |
| `assembly/textbin/sky_draw_shell` | 0x22b690 | `SkyDrawShell__Fi` | skyfunc |
| `assembly/textbin/sky_sprite_proc` | 0x22bba0 | `SkySpriteProc` | skyproc |
| `assembly/textbin/snd_got_returns` | 0x12de70 | `snd_GotReturns` | snd989 |
| `assembly/textbin/snd_post_message` | 0x12e9a0 | `snd_PostMessage` | snd989 |
| `assembly/textbin/snd_send_iop_command_no_wait` | 0x12e6e0 | `snd_SendIOPCommandNoWait` | snd989 |
| `assembly/textbin/snd_set_reverb_ex` | 0x12ef68 | `snd_SetReverbEx` | snd989 |
| `assembly/textbin/snd_start_sound_system` | 0x12da28 | `snd_StartSoundSystem` | snd989 |
| `assembly/textbin/snd_stream_safe_cd_get_error` | 0x12eef0 | `snd_StreamSafeCdGetError` | snd989 |
| `assembly/textbin/snd_stream_safe_cd_read` | 0x12ed58 | `snd_StreamSafeCdRead` | snd989 |
| `assembly/textbin/snd_stream_safe_check_cd_idle` | 0x12ed30 | `snd_StreamSafeCheckCDIdle` | snd989 |
| `assembly/textbin/sound_options_menu` | 0x21cb30 | `SoundOptionsMenu` | game/pause.cpp |
| `assembly/textbin/tfrag_proc` | 0x233fb0 | `TfragProc` | game/initonce.cpp |
| `assembly/textbin/update_all_point_lights` | 0x201a28 | `UpdateAllPointLights` | lights |
| `assembly/textbin/vblank_handler` | 0x23b3d8 | `vblankHandler` | movie/disp.cpp |
| `assembly/textbin/vi_buf_create` | 0x23bc48 | `viBufCreate` | movie/vibuf.cpp |
| `assembly/textbin/vi_buf_delete` | 0x23c5b8 | `viBufDelete__FP5ViBuf` | movie/vibuf.cpp |
| `assembly/textbin/vi_buf_put_ts` | 0x23c810 | `viBufPutTs__FP5ViBufP9TimeStamp` | movie/vibuf.cpp |
| `assembly/textbin/vi_buf_reset` | 0x23bcc0 | `viBufReset__FP5ViBuf` | movie/vibuf.cpp |
| `assembly/textbin/vi_buf_restart_dma` | 0x23c280 | `viBufRestartDMA__FP5ViBuf` | movie/vibuf.cpp |
| `assembly/textbin/vi_buf_stop_dma` | 0x23c170 | `viBufStopDMA__FP5ViBuf` | movie/vibuf.cpp |
| `assembly/textbin/video_callback` | 0x23b5f0 | `videoCallback` | movie/read.cpp |
| `assembly/textbin/video_dec_flush` | 0x23cd08 | `videoDecFlush__FP8VideoDec` | movie/videodec.cpp |
| `assembly/textbin/video_dec_put_ts` | 0x23cc98 | `videoDecPutTs__FP8VideoDecllPUci` | movie/videodec.cpp |
| `assembly/textbin/vo_buf_inc_count` | 0x23d210 | `voBufIncCount__FP5VoBuf` | movie/vobuf.cpp |
| `assembly/textbin/vu1_swap_chain` | 0x233630 | `VU1_swapChain__Fv` | vuchain.cpp |
| `assembly/textbin/write_gs_header` | 0x1f8364 | `writeGSHeader` | drawquad |
| `assembly/textbin/write_setup_block` | 0x1f82e4 | `writeSetupBlock` | drawquad |
| `core/hud_heap_reset` | 0x1ff260 | `Hud_HeapReset__Fv` | hud.cpp |
| `core/read_buf_begin_put` | 0x23b960 | `readBufBeginPut__FP7ReadBufPPUc` | movie/readbuf.cpp |
| `core/read_buf_create` | 0x23b940 | `readBufCreate__FP7ReadBuf` | movie/readbuf.cpp |
| `core/video_dec_get_state` | 0x23cc80 | `videoDecGetState` | movie/videodec.cpp |
| `core/video_dec_reset` | 0x23cc30 | `videoDecReset__FP8VideoDec` | movie/videodec.cpp |
| `core/vo_buf_reset` | 0x23d1e8 | `voBufReset__FP5VoBuf` | movie/vobuf.cpp |
| `ee/memcard_get_data_size` | 0x20ac88 | `memcard_GetDataSize` | game/initonce.cpp |
| `sys/read_buf_delete` | 0x23b958 | `readBufDelete__FP7ReadBuf` | movie/readbuf.cpp |
| `sys/vo_buf_delete` | 0x23d1e0 | `voBufDelete__FP5VoBuf` | movie/vobuf.cpp |
| `textbin/get_occl_grid_from_pair` | 0x1f2768 | `GetOcclGridFromPair__Fiiiiiif` | game/initonce.cpp |
| `textbin/init_moby_class_dists` | 0x20d1f0 | `InitMobyClassDists__Fv` | mobyfunc |
| `textbin/snd_continue_all_sounds_in_group` | 0x12e418 | `snd_ContinueAllSoundsInGroup` | snd989 |
| `textbin/snd_continue_vag_stream` | 0x12eca0 | `snd_ContinueVAGStream` | snd989 |
| `textbin/snd_get_vag_stream_time_remaining_cb` | 0x12ecd0 | `snd_GetVAGStreamTimeRemaining_CB` | snd989 |
| `textbin/snd_is_vag_stream_buffered_cb` | 0x12ed00 | `snd_IsVAGStreamBuffered_CB` | snd989 |
| `textbin/snd_pause_all_sounds_in_group` | 0x12e3e8 | `snd_PauseAllSoundsInGroup` | snd989 |
| `textbin/snd_pause_vag_stream` | 0x12ec70 | `snd_PauseVAGStream` | snd989 |
| `textbin/snd_unk_function_0012eb00` | 0x12eb00 | `snd_UnkFunction_0012eb00` | snd989 |
| `textbin/snd_unload_bank` | 0x12e1d8 | `snd_UnloadBank` | snd989 |
| `textbin/update_occlusion` | 0x1f2c10 | `UpdateOcclusion__Fv` | game/initonce.cpp |
| `textbin/video_dec_is_flushed` | 0x23cde0 | `videoDecIsFlushed__FP8VideoDec` | movie/videodec.cpp |
| `textbin/video_dec_set_stream` | 0x23cbd0 | `videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv` | movie/videodec.cpp |
| `textbin/vo_buf_get_data` | 0x23d288 | `voBufGetData__FP5VoBuf` | movie/vobuf.cpp |

## Fragment starts

The recovered function starts at our unit and continues past it (206).

| Unit | Address | Unit size | Recovered name | Recovered size | Original file |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `assembly/core/fill_transfer_words` | 0x1f97e8 | 0x28 | `FastMemSet` | 0xe8 | game/help.cpp |
| `assembly/core/spin_wait` | 0x1f97c0 | 0x28 | `FastSitAndSpin__Fi` | 0x50 | fastfunc.s |
| `assembly/core/store_object_index` | 0x12def8 | 0x1c | `snd_PrepareReturnBuffer` | 0x28 | snd989 |
| `assembly/gs/initialize_render_state` | 0x216050 | 0x34 | `music_Pause__Fi` | 0x38 | music.cpp |
| `assembly/kernel/flush_cache` | 0x118a80 | 0x10 | `FlushCache` | 0x46b84 | game/help.cpp |
| `assembly/kernel/jump_to_rfu_status` | 0x12d8e8 | 0x8 | `_exit` | 0xf0 |  |
| `assembly/kernel/update_rfu_dispatch_state` | 0x11dcc8 | 0x20 | `__main` | 0xfa60 |  |
| `assembly/math/compute_sector_index` | 0x12f1a0 | 0x24 | `snd_GetDopplerPitchMod` | 0x28 | snd989 |
| `assembly/textbin/fun_0012d8f8` | 0x12d8f8 | 0xdc | `ParseBin__Fv` | 0xbbd60 | game/bmain.cpp |
| `assembly/textbin/fun_0012dc80` | 0x12dc80 | 0x1e0 | `snd_FlushSoundCommands` | 0x1f0 | snd989 |
| `assembly/textbin/fun_0012df20` | 0x12df20 | 0x154 | `snd_BankLoadByLoc` | 0x168 | snd989 |
| `assembly/textbin/fun_0012e088` | 0x12e088 | 0x110 | `snd_BankLoadFromEE_CB` | 0x120 | snd989 |
| `assembly/textbin/fun_0012e1a8` | 0x12e1a8 | 0x2c | `snd_ResolveBankXREFS` | 0x30 | snd989 |
| `assembly/textbin/fun_0012e280` | 0x12e280 | 0x34 | `snd_SetMixerMode` | 0x38 | snd989 |
| `assembly/textbin/fun_0012e308` | 0x12e308 | 0x48 | `snd_PlaySoundVolPanPMPB` | 0x60 | snd989 |
| `assembly/textbin/fun_0012e368` | 0x12e368 | 0x30 | `snd_StopSound` | 0x50 | snd989 |
| `assembly/textbin/fun_0012e3b8` | 0x12e3b8 | 0x2c | `snd_StopAllSounds` | 0x30 | snd989 |
| `assembly/textbin/fun_0012e4c0` | 0x12e4c0 | 0x48 | `snd_SetSoundParams_CB` | 0x88 | snd989 |
| `assembly/textbin/fun_0012e548` | 0x12e548 | 0x194 | `snd_SendIOPCommandAndWait` | 0x198 | snd989 |
| `assembly/textbin/fun_0012e9d8` | 0x12e9d8 | 0x114 | `snd_SendCurrentBatch` | 0x118 | snd989 |
| `assembly/textbin/fun_0012eb20` | 0x12eb20 | 0xac | `snd_InitVAGStreamingEx` | 0xb0 | snd989 |
| `assembly/textbin/fun_0012ec08` | 0x12ec08 | 0x64 | `snd_PlayVAGStreamByLocEx_CB` | 0x68 | snd989 |
| `assembly/textbin/fun_0012eea8` | 0x12eea8 | 0x44 | `snd_StreamSafeCdBreak` | 0x48 | snd989 |
| `assembly/textbin/fun_0012ef28` | 0x12ef28 | 0x30 | `snd_StreamSafeCdCallback` | 0x40 | snd989 |
| `assembly/textbin/fun_0012f068` | 0x12f068 | 0x3c | `snd_InitMovieSound` | 0x40 | snd989 |
| `assembly/textbin/fun_0012f0e0` | 0x12f0e0 | 0x24 | `snd_CloseMovieSound` | 0x28 | snd989 |
| `assembly/textbin/fun_0012f108` | 0x12f108 | 0x38 | `snd_StartMovieSound` | 0x40 | snd989 |
| `assembly/textbin/fun_0012f148` | 0x12f148 | 0x2c | `snd_UpdateMovieADPCM` | 0x30 | snd989 |
| `assembly/textbin/fun_0012f208` | 0x12f208 | 0xac | `wad_GetSectors_FiiPv` | 0xc47c8 | snd989 |
| `assembly/textbin/fun_001e9ab8` | 0x1e9ab8 | 0x58 | `Transition_DrawSky__Fv` | 0xd78 | transition |
| `assembly/textbin/fun_001ea830` | 0x1ea830 | 0x71c | `Transition_LoadWad` | 0x758 | transition |
| `assembly/textbin/fun_001eaf88` | 0x1eaf88 | 0x11c | `Transition_UpdateMovieCamera__Fv` | 0x120 | transition |
| `assembly/textbin/fun_001eb0a8` | 0x1eb0a8 | 0x364 | `Transition_FUN_001eb0a8` | 0x368 | transition |
| `assembly/textbin/fun_001eb410` | 0x1eb410 | 0x330 | `Transition_DefaultDraw__Fb` | 0x388 | transition |
| `assembly/textbin/fun_001ebcf0` | 0x1ebcf0 | 0x6c | `ExecuteCamPostUpdFuncs` | 0x25a38 | mobyproc |
| `assembly/textbin/fun_001ebd78` | 0x1ebd78 | 0xe4 | `Cam_InterpValues__FffPffff` | 0x20780 | mobyfunc |
| `assembly/textbin/fun_001ebec8` | 0x1ebec8 | 0x44 | `Camera_runSetupToNewCam__FP9UpdateCam` | 0x348 | camera |
| `assembly/textbin/fun_001ec210` | 0x1ec210 | 0x1c4 | `Camera_ActivationCheckPriority` | 0x1c8 | camera |
| `assembly/textbin/fun_001ec3d8` | 0x1ec3d8 | 0x44 | `Camera_Exit__FP9UpdateCam` | 0x48 | camera |
| `assembly/textbin/fun_001efa68` | 0x1efa68 | 0x10f0 | `CollLine_Fix` | 0x252420 | collproc |
| `assembly/textbin/fun_001f2588` | 0x1f2588 | 0x104 | `UpdateFog__Fi` | 0x108 | game/initonce.cpp |
| `assembly/textbin/fun_001f2690` | 0x1f2690 | 0xd4 | `ParseOcclGrid` | 0xd8 | game/initonce.cpp |
| `assembly/textbin/fun_001f2c60` | 0x1f2c60 | 0x134 | `InitViewContext__Fv` | 0x138 | game/initonce.cpp |
| `assembly/textbin/fun_001f2d98` | 0x1f2d98 | 0x61c | `UpdateViewContext__Fv` | 0x750 | game/initonce.cpp |
| `assembly/textbin/fun_001f37e8` | 0x1f37e8 | 0x7c | `ResetDrawGlobals` | 0x80 | game/initonce.cpp |
| `assembly/textbin/fun_001f3868` | 0x1f3868 | 0xec | `ResetGsRegisters__Fv` | 0xf0 | game/initonce.cpp |
| `assembly/textbin/fun_001f3958` | 0x1f3958 | 0x78 | `ResetGsRegistersPr__Fv` | 0x928 | game/initonce.cpp |
| `assembly/textbin/fun_001f39d0` | 0x1f39d0 | 0x878 | `DrawDebugProfiler` | 0x18d0 | snd989 |
| `assembly/textbin/fun_001f4280` | 0x1f4280 | 0x114 | `SetupGifPaging__Fi` | 0x118 | game/initonce.cpp |
| `assembly/textbin/fun_001f4398` | 0x1f4398 | 0x11c | `DoGifPaging__Fv` | 0x120 | game/initonce.cpp |
| `assembly/textbin/fun_001f44b8` | 0x1f44b8 | 0x148 | `GetEffectTex__Fii` | 0x5a0 | game/initonce.cpp |
| `assembly/textbin/fun_001f4a58` | 0x1f4a58 | 0x188 | `FadeToBlack__FiUi` | 0x9f8 | game/initonce.cpp |
| `assembly/textbin/fun_001f5450` | 0x1f5450 | 0x184 | `DrawTexturedQuad` | 0xac8 | game/initonce.cpp |
| `assembly/textbin/fun_001f5f18` | 0x1f5f18 | 0x144 | `DrawUIFrame` | 0xb6c0 | game/initonce.cpp |
| `assembly/textbin/fun_001f6af0` | 0x1f6af0 | 0x94 | `FontPrintCenter` | 0x98 | fonts.cpp // |
| `assembly/textbin/fun_001f6b88` | 0x1f6b88 | 0x94 | `FontPrintCenterSmall` | 0x98 | fonts.cpp // |
| `assembly/textbin/fun_001f6c20` | 0x1f6c20 | 0x94 | `FontPrintCenterLarge` | 0x470 | fonts.cpp // |
| `assembly/textbin/fun_001f7090` | 0x1f7090 | 0x4f0 | `FontPrintWindow` | 0x5d8 | fonts.cpp // |
| `assembly/textbin/fun_001f7a98` | 0x1f7a98 | 0x178 | `FastIntersectVert` | 0x298 | drawquad |
| `assembly/textbin/fun_001f9770` | 0x1f9770 | 0x30 | `FastDecTimer__FRs` | 0x50 | fastfunc.s |
| `assembly/textbin/fun_001f9810` | 0x1f9810 | 0x28 | `FastMemZero16__FPvi` | 0x218 | fastfunc.s |
| `assembly/textbin/fun_001f98d0` | 0x1f98d0 | 0x28 | `FastMemCopy` | 0x43d0 | game/help.cpp |
| `assembly/textbin/fun_001f9a28` | 0x1f9a28 | 0x18 | `FastVecSub` | 0x88 | fastfunc.s |
| `assembly/textbin/fun_001f9af0` | 0x1f9af0 | 0x30 | `FastVecLength` | 0x108 | fastfunc.s |
| `assembly/textbin/fun_001f9bf8` | 0x1f9bf8 | 0x50 | `FastVecNormalize` | 0x158 | fastfunc.s |
| `assembly/textbin/fun_001f9d68` | 0x1f9d68 | 0x28 | `FastVectorToPackedChars__FR4vec4` | 0x30 | fastfunc.s |
| `assembly/textbin/fun_001f9e90` | 0x1f9e90 | 0x110 | `FastArcTan__Fff` | 0x6f0 | fastfunc.s |
| `assembly/textbin/fun_001fa688` | 0x1fa688 | 0x38 | `FastDiffRots__Fff` | 0x58 | fastfunc.s |
| `assembly/textbin/fun_001fa978` | 0x1fa978 | 0x904 | `SetupFS_AA_buffer__Fiiiiii` | 0x908 | game/framebuf.cpp |
| `assembly/textbin/fun_001fb2a8` | 0x1fb2a8 | 0x24 | `PutDispBuffer__Fv` | 0x28 | game/framebuf.cpp |
| `assembly/textbin/fun_001fb2d0` | 0x1fb2d0 | 0x94 | `PutDrawBufferLarge__Fv` | 0x100 | game/framebuf.cpp |
| `assembly/textbin/fun_001fb3d0` | 0x1fb3d0 | 0x6c | `PutDrawBufferSmall__Fv` | 0x2b0 | game/framebuf.cpp |
| `assembly/textbin/fun_001fbc50` | 0x1fbc50 | 0x11d4 | `DrawDialogText__Fv` | 0x11d8 | game/freeze.cpp |
| `assembly/textbin/fun_001fdca0` | 0x1fdca0 | 0x6c | `Help_FindIndex` | 0x70 | game/help.cpp |
| `assembly/textbin/fun_001fde90` | 0x1fde90 | 0xa04 | `Help_Update` | 0xa08 | game/help.cpp |
| `assembly/textbin/fun_001fee38` | 0x1fee38 | 0x4c | `Hud_GetIconIndex__Fi` | 0x188 | hud.cpp |
| `assembly/textbin/fun_001fefc0` | 0x1fefc0 | 0x160 | `LinkHudBank__FiPc` | 0x168 | hud.cpp |
| `assembly/textbin/fun_001ff288` | 0x1ff288 | 0x74 | `Hud_HeapAlloc__FUiPcT1i` | 0x6d8 | hud.cpp |
| `assembly/textbin/fun_001ff960` | 0x1ff960 | 0xac | `GetIconFrame__Fii` | 0xb0 | hud.cpp |
| `assembly/textbin/fun_001ffa10` | 0x1ffa10 | 0x220 | `GetFrameTex__Fi` | 0x1100 | hud.cpp |
| `assembly/textbin/fun_00201650` | 0x201650 | 0x3cc | `InitOnce__Fv` | 0x79e0 | game/initonce.cpp |
| `assembly/textbin/fun_002026c8` | 0x2026c8 | 0x138 | `ParseParticleTexs` | 0x3d0 | loaders.cpp |
| `assembly/textbin/fun_00202a98` | 0x202a98 | 0x274 | `LoadHudBanks__Fv` | 0x278 | loaders.cpp |
| `assembly/textbin/fun_00202d10` | 0x202d10 | 0x64 | `LoadCompressedHudBank__FiPc` | 0x2c0 | loaders.cpp |
| `assembly/textbin/fun_00202fd0` | 0x202fd0 | 0x14c | `SetUpVisGifViewer__FPiiiiii` | 0x1a20 | loaders.cpp |
| `assembly/textbin/fun_00209030` | 0x209030 | 0x134 | `memcard_GetName` | 0x268 | game/initonce.cpp |
| `assembly/textbin/fun_00209298` | 0x209298 | 0xd4 | `memcard_RestoreGame` | 0x140 | game/initonce.cpp |
| `assembly/textbin/fun_002093d8` | 0x2093d8 | 0x17d4 | `memcard_Update` | 0x17d8 | game/initonce.cpp |
| `assembly/textbin/fun_0020acc0` | 0x20acc0 | 0x74 | `memcard_Checksum` | 0x78 | game/initonce.cpp |
| `assembly/textbin/fun_0020ad38` | 0x20ad38 | 0x3c | `memcard_TestChecksum` | 0x40 | game/initonce.cpp |
| `assembly/textbin/fun_0020ae60` | 0x20ae60 | 0xbc | `memcard_RestoreInfo__FPcii` | 0xc0 | game/initonce.cpp |
| `assembly/textbin/fun_0020af20` | 0x20af20 | 0x254 | `memcard_RestoreData__FPcT0iP7mc_data` | 0x258 | game/initonce.cpp |
| `assembly/textbin/fun_0020b178` | 0x20b178 | 0x244 | `memcard_Save__Fii` | 0x1c78 | game/initonce.cpp |
| `assembly/textbin/fun_0020b418` | 0x20b418 | 0x8c | `InitDma` | 0x200 | miscproc |
| `assembly/textbin/fun_0020c828` | 0x20c828 | 0x58 | `DeleteMoby` | 0x2e8 | mobyfunc |
| `assembly/textbin/fun_0020cb88` | 0x20cb88 | 0x90 | `DetachManipulator` | 0x620 | mobyfunc |
| `assembly/textbin/fun_0020cef8` | 0x20cef8 | 0xd8 | `PatchMobyGifs` | 0xab38 | game/initonce.cpp |
| `assembly/textbin/fun_0020d3b0` | 0x20d3b0 | 0xac | `DrawMobysCleanUp` | 0xb0 | mobyfunc |
| `assembly/textbin/fun_0020d460` | 0x20d460 | 0x80 | `DrawMobys` | 0x7c0 | mobyfunc |
| `assembly/textbin/fun_00215b68` | 0x215b68 | 0xd4 | `music_PreseekTrack__Fiii` | 0xd8 | music.cpp |
| `assembly/textbin/fun_00215c40` | 0x215c40 | 0xd4 | `music_StartTrack__Fiii` | 0xd8 | music.cpp |
| `assembly/textbin/fun_00215d18` | 0x215d18 | 0xe4 | `music_StartTrackBody__Fiii` | 0xe8 | music.cpp |
| `assembly/textbin/fun_00215e00` | 0x215e00 | 0xe0 | `music_Transition__Fiiii` | 0xe8 | music.cpp |
| `assembly/textbin/fun_002170c8` | 0x2170c8 | 0x1f4 | `UpdatePad__FR3PAD` | 0x1f8 | pad.cpp |
| `assembly/textbin/fun_00217a30` | 0x217a30 | 0x150 | `CreatePart` | 0x158 | game/initonce.cpp |
| `assembly/textbin/fun_00217b88` | 0x217b88 | 0x8c | `UpdateParts` | 0x90 | game/initonce.cpp |
| `assembly/textbin/fun_0021880c` | 0x21880c | 0x70 | `_part_load_tex` | 0x1afa4 | game/initonce.cpp |
| `assembly/textbin/fun_00218d78` | 0x218d78 | 0x1d4 | `PauseAllSounds` | 0x30e8 | game/pause.cpp |
| `assembly/textbin/fun_0021be60` | 0x21be60 | 0x5bc | `DrawMapScreen` | 0xcd0 | game/pause.cpp |
| `assembly/textbin/fun_0021ce00` | 0x21ce00 | 0x368 | `DrawSoundMenu` | 0x1a90 | game/pause.cpp |
| `assembly/textbin/fun_0021e890` | 0x21e890 | 0x1b8 | `DrawQuitGameMenu` | 0x290 | game/pause.cpp |
| `assembly/textbin/fun_0021eb20` | 0x21eb20 | 0x454 | `DrawItemsMenu` | 0x458 | game/pause.cpp |
| `assembly/textbin/fun_0021ef78` | 0x21ef78 | 0x1a8 | `DrawGBsShipMenu__maybe` | 0x3f0 | game/pause.cpp |
| `assembly/textbin/fun_0021f368` | 0x21f368 | 0x28c | `DrawMissionsMenu` | 0x320 | game/pause.cpp |
| `assembly/textbin/fun_0021f688` | 0x21f688 | 0x260 | `DrawMissionsMenu2` | 0xcc0 | game/pause.cpp |
| `assembly/textbin/fun_00220348` | 0x220348 | 0x2fc | `DrawCheckingMemoryCardDataMenu` | 0xce8 | game/pause.cpp |
| `assembly/textbin/fun_00221030` | 0x221030 | 0x284 | `DrawCheatsMenu` | 0x1918 | game/pause.cpp |
| `assembly/textbin/fun_00222a98` | 0x222a98 | 0x2fc | `DrawEndScreenMenuMaybe` | 0x4f0 | game/pause.cpp |
| `assembly/textbin/fun_002232d8` | 0x2232d8 | 0x2dc | `LoadingDataMenu` | 0x2e0 | game/pause.cpp |
| `assembly/textbin/fun_002235b8` | 0x2235b8 | 0x428 | `SavingDataMenu2` | 0xdb0 | game/pause.cpp |
| `assembly/textbin/fun_002288f0` | 0x2288f0 | 0x13c | `DmaShrubTextures` | 0x248 | game/shrub something |
| `assembly/textbin/fun_00228be8` | 0x228be8 | 0x1744 | `ShrubProc` | 0x1748 | game/shrub something |
| `assembly/textbin/fun_0022ae70` | 0x22ae70 | 0x414 | `SkyLevelGeneric___maybe` | 0x658 | skyfunc |
| `assembly/textbin/fun_0022b4c8` | 0x22b4c8 | 0x8c | `SetupSkyGifPaging__Fv` | 0x90 | skyfunc |
| `assembly/textbin/fun_0022b558` | 0x22b558 | 0x12c | `DoSkyGifPaging__Fv` | 0x138 | skyfunc |
| `assembly/textbin/fun_0022b6e8` | 0x22b6e8 | 0x23c | `SkyDrawShellTextured` | 0x240 | skyfunc |
| `assembly/textbin/fun_0022bec4` | 0x22bec4 | 0xd0 | `_ssp_load_tex` | 0x604 | skyproc |
| `assembly/textbin/fun_0022ca50` | 0x22ca50 | 0xcb4 | `sound_update` | 0x1280 | sound |
| `assembly/textbin/fun_0022dcd0` | 0x22dcd0 | 0xa8 | `sound_StopAllSounds__Fv` | 0x140 | sound |
| `assembly/textbin/fun_002331c0` | 0x2331c0 | 0x144 | `DmaTfragTextures__Fv` | 0x148 | tfragfunc.cpp |
| `assembly/textbin/fun_00233308` | 0x233308 | 0x9c | `PatchTfragGifs__Fv` | 0xa0 | tfragfunc.cpp |
| `assembly/textbin/fun_002334d8` | 0x2334d8 | 0xc8 | `VU0_loadMicroProgram__FPl` | 0xf8 | vuchain.cpp |
| `assembly/textbin/fun_002335d0` | 0x2335d0 | 0x5c | `VU1_initChain__Fv` | 0x60 | vuchain.cpp |
| `assembly/textbin/fun_002336a0` | 0x2336a0 | 0x110 | `VU1_sendChain__Fv` | 0x190 | vuchain.cpp |
| `assembly/textbin/fun_002337b0` | 0x2337b0 | 0x80 | `VU1_syncChain__Fi` | 0x800 | game/initonce.cpp |
| `assembly/textbin/fun_00233830` | 0x233830 | 0x4c | `VU1_addDataRef__FPvi` | 0x150 | vuchain.cpp |
| `assembly/textbin/fun_00233a40` | 0x233a40 | 0x11c | `VU1_setScissor__Fiiii` | 0x128 | vuchain.cpp |
| `assembly/textbin/fun_00233b68` | 0x233b68 | 0x5c | `VU1_texFlush__Fv` | 0x60 | vuchain.cpp |
| `assembly/textbin/fun_00233bc8` | 0x233bc8 | 0x5c | `VU1_gsRegsNormal__Fv` | 0x138 | vuchain.cpp |
| `assembly/textbin/fun_00234bd8` | 0x234bd8 | 0x16c | `ComputeTfragTextureUsage` | 0x170 | game/initonce.cpp |
| `assembly/textbin/fun_00235640` | 0x235640 | 0x13c | `DmaTieTextures__Fv` | 0x140 | tiefunc |
| `assembly/textbin/fun_00235780` | 0x235780 | 0xc0 | `PatchTieGifs` | 0x148 | tiefunc |
| `assembly/textbin/fun_00235be8` | 0x235be8 | 0x14d4 | `TieProc` | 0x14d8 | tieproc |
| `assembly/textbin/fun_002370c0` | 0x2370c0 | 0x2ac | `BuildTieTextureDma` | 0x2b0 | tieproc |
| `assembly/textbin/fun_0023a790` | 0x23a790 | 0x2c | `isAudioOK` | 0x30 | movie/movie.cpp |
| `assembly/textbin/fun_0023a7c0` | 0x23a7c0 | 0x2a4 | `initAll__Fiii` | 0x2a8 | movie/movie.cpp |
| `assembly/textbin/fun_0023aa68` | 0x23aa68 | 0x10c | `termAll__Fv` | 0x110 | movie/movie.cpp |
| `assembly/textbin/fun_0023ab78` | 0x23ab78 | 0x24 | `ErrMessage` | 0x28 | movie/movie.cpp |
| `assembly/textbin/fun_0023aba0` | 0x23aba0 | 0x2c | `proceedAudio__Fv` | 0x2b4ab8 | movie/movie.cpp |
| `assembly/textbin/fun_0023abd0` | 0x23abd0 | 0xbc | `audioDecCreate__FP9_AudioDecPUci14sceMpegStrType` | 0xc0 | movie/audiodec.cpp |
| `assembly/textbin/fun_0023ae28` | 0x23ae28 | 0xb4 | `audioDecEndPut__FP9_AudioDeci` | 0xc8 | movie/audiodec.cpp |
| `assembly/textbin/fun_0023b210` | 0x23b210 | 0x1c4 | `setImageTag` | 0x1c8 | movie/disp.cpp |
| `assembly/textbin/fun_0023b540` | 0x23b540 | 0x4c | `handler_endimage` | 0x50 | movie/disp.cpp |
| `assembly/textbin/fun_0023b590` | 0x23b590 | 0x4c | `startDisplay__Fi` | 0x50 | movie/disp.cpp |
| `assembly/textbin/fun_0023b728` | 0x23b728 | 0xe4 | `pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv` | 0xe8 | movie/read.cpp |
| `assembly/textbin/fun_0023be20` | 0x23be20 | 0xf4 | `viBufBeginPut__FP5ViBufPPUcPiT1T2` | 0xf8 | movie/vibuf.cpp |
| `assembly/textbin/fun_0023bf70` | 0x23bf70 | 0x1fc | `viBufAddDMA__FP5ViBuf` | 0x200 | movie/vibuf.cpp |
| `assembly/textbin/fun_0023c660` | 0x23c660 | 0x54 | `viBufFlush__FP5ViBuf` | 0x58 | movie/vibuf.cpp |
| `assembly/textbin/fun_0023c6b8` | 0x23c6b8 | 0x154 | `viBufModifyPts__FP5ViBufP9TimeStamp` | 0x158 | movie/vibuf.cpp |
| `assembly/textbin/fun_0023ce28` | 0x23ce28 | 0x9c | `videoDecMain__FPv` | 0xa0 | movie/videodec.cpp |
| `assembly/textbin/fun_0023cec8` | 0x23cec8 | 0x1b4 | `decBs0__FP8VideoDec` | 0x1b8 | movie/videodec.cpp |
| `assembly/textbin/fun_0023d190` | 0x23d190 | 0x4c | `voBufCreate__FP5VoBufP6VoDataP5VoTagi` | 0x50 | movie/vobuf.cpp |
| `assembly/textbin/fun_0023d2d8` | 0x23d2d8 | 0x64 | `voBufGetTag__FP5VoBuf` | 0x68 | movie/vobuf.cpp |
| `core/compare_state_fields` | 0x23d1f8 | 0x14 | `voBufIsFull__FP5VoBuf` | 0x18 | movie/vobuf.cpp |
| `core/is_state_field_zero` | 0x23d2c8 | 0xc | `voBufIsEmpty` | 0x10 | movie/vobuf.cpp |
| `core/pack_state_value` | 0x23bc20 | 0x24 | `scTag2` | 0x28 | movie/vibuf.cpp |
| `core/read_global_table_entry` | 0x12eaf0 | 0xc | `snd_UnkFunction_0012eaf0` | 0x10 | snd989 |
| `core/replace_state_field` | 0x23cc88 | 0xc | `videoDecSetState__FP8VideoDecUi` | 0x10 | movie/videodec.cpp |
| `core/set_state_field` | 0x23cc70 | 0xc | `videoDecAbort__FP8VideoDec` | 0x10 | movie/videodec.cpp |
| `gs/update_render_state_command` | 0x216088 | 0x1c | `music_Unpause__Fv` | 0x20 | music.cpp |
| `sdk/debug_print` | 0x1e93b0 | 0x38 | `STUB_printf` | 0x28e0 | mobyproc |
| `sdk/sce_pad2_read` | 0x124bd8 | 0xd4 | `scePad2Read` | 0xf24f0 | pad.cpp |
| `textbin/fun_0012e208` | 0x12e208 | 0x34 | `snd_SetMasterVolume` | 0x38 | snd989 |
| `textbin/fun_0012e240` | 0x12e240 | 0x30 | `snd_SetPlaybackMode` | 0x40 | snd989 |
| `textbin/fun_0012e2b8` | 0x12e2b8 | 0x3c | `snd_SetGroupVoiceRange` | 0x50 | snd989 |
| `textbin/fun_0012e448` | 0x12e448 | 0x30 | `snd_SoundIsStillPlaying_CB` | 0x78 | snd989 |
| `textbin/fun_0012ebd0` | 0x12ebd0 | 0x2c | `snd_StopAllStreams` | 0x38 | snd989 |
| `textbin/fun_0012ee08` | 0x12ee08 | 0x9c | `snd_StreamSafeCdSync` | 0xa0 | snd989 |
| `textbin/fun_0012efa8` | 0x12efa8 | 0x34 | `snd_PreAllocReverbWorkArea` | 0x38 | snd989 |
| `textbin/fun_0012efe0` | 0x12efe0 | 0x3c | `snd_AutoReverb` | 0x88 | snd989 |
| `textbin/fun_0012f0a8` | 0x12f0a8 | 0x24 | `snd_ResetMovieSound` | 0x38 | snd989 |
| `textbin/fun_0012f178` | 0x12f178 | 0x24 | `snd_GetMovieNAX` | 0x28 | snd989 |
| `textbin/fun_001ebc90` | 0x1ebc90 | 0x5c | `BackupCurrentCam` | 0x60 | mobyproc |
| `textbin/fun_001f6530` | 0x1f6530 | 0x7c | `FontPrintLarge` | 0x80 | fonts.cpp // |
| `textbin/fun_001f65b0` | 0x1f65b0 | 0x7c | `FontPrintSmall` | 0x540 | fonts.cpp // |
| `textbin/fun_001fdd10` | 0x1fdd10 | 0x40 | `msg_string__Fi` | 0x180 | game/help.cpp |
| `textbin/fun_00201f58` | 0x201f58 | 0x2c | `RefreshPointLight` | 0x30 | lights |
| `textbin/fun_0020d1a8` | 0x20d1a8 | 0x44 | `ProcessMobyAnimData__Fv` | 0x48 | mobyfunc |
| `textbin/fun_0020d218` | 0x20d218 | 0x2c | `StashMobyClassDists__Fv` | 0x30 | mobyfunc |
| `textbin/fun_0020d248` | 0x20d248 | 0x2c | `RestoreMobyClassDists__Fv` | 0x30 | mobyfunc |
| `textbin/fun_002172c0` | 0x2172c0 | 0x64 | `ClearPadInput__FR3PAD` | 0x68 | pad.cpp |
| `textbin/fun_00233980` | 0x233980 | 0xb4 | `VU1_addGSregister__FUiUlb` | 0xc0 | vuchain.cpp |
| `textbin/fun_0023a770` | 0x23a770 | 0x1c | `switchThread` | 0x20 | movie/movie.cpp |
| `textbin/fun_0023ac90` | 0x23ac90 | 0x20 | `audioDecDelete__FP9_AudioDec` | 0x28 | movie/audiodec.cpp |
| `textbin/fun_0023ad10` | 0x23ad10 | 0x44 | `audioDecReset__FP9_AudioDec` | 0x48 | movie/audiodec.cpp |
| `textbin/fun_0023aef0` | 0x23aef0 | 0x24 | `audioDecSend` | 0x28 | movie/audiodec.cpp |
| `textbin/fun_0023baf8` | 0x23baf8 | 0x44 | `getFIFOindex__FP5ViBufPv` | 0x48 | movie/vibuf.cpp |
| `textbin/fun_0023bb40` | 0x23bb40 | 0x6c | `setD3_CHCR__FUi` | 0x70 | movie/vibuf.cpp |
| `textbin/fun_0023bbb0` | 0x23bbb0 | 0x6c | `setD4_CHCR__FUi` | 0x70 | movie/vibuf.cpp |
| `textbin/fun_0023bf18` | 0x23bf18 | 0x54 | `viBufEndPut__FP5ViBufi` | 0x58 | movie/vibuf.cpp |
| `textbin/fun_0023c610` | 0x23c610 | 0x4c | `viBufCount__FP5ViBuf` | 0x50 | movie/vibuf.cpp |
| `textbin/fun_0023cac8` | 0x23cac8 | 0x100 | `videoDecCreate__FP8VideoDecPUciPUxT3iP9TimeStampi` | 0x108 | movie/videodec.cpp |
| `textbin/fun_0023cbf0` | 0x23cbf0 | 0x1c | `videoDecBeginPut__FP8VideoDecPPUcPiT1T2` | 0x20 | movie/videodec.cpp |
| `textbin/fun_0023cc10` | 0x23cc10 | 0x1c | `videoDecEndPut__FP8VideoDec` | 0x20 | movie/videodec.cpp |
| `textbin/fun_0023cc38` | 0x23cc38 | 0x34 | `videoDecDelete__FP8VideoDec` | 0x38 | movie/videodec.cpp |
| `textbin/fun_0023cce0` | 0x23cce0 | 0x1c | `videoDecInputCount__FP8VideoDec` | 0x28 | movie/videodec.cpp |

## Unknown recovered extent

The recovered function starts at our unit and is the last named symbol in its source-file group, so its extent is not recoverable from this data (42).

| Unit | Address | Recovered name | Original file |
| :--- | :--- | :--- | :--- |
| `assembly/core/clear_stage_state_flag` | 0x23b5e0 | `endDisplay__Fv` | movie/disp.cpp |
| `assembly/textbin/fun_0012d9d8` | 0x12d9d8 | `main` |  |
| `assembly/textbin/fun_001e9338` | 0x1e9338 | `LoadDebugFont` | bloaders |
| `assembly/textbin/fun_001e9658` | 0x1e9658 | `startlevel__Fv` | game/bmain.cpp |
| `assembly/textbin/fun_001eb798` | 0x1eb798 | `Transition_DoTransition__Fv` | transition |
| `assembly/textbin/fun_001ec420` | 0x1ec420 | `UpdateAllCameras__Fi` | camera |
| `assembly/textbin/fun_001f52a0` | 0x1f52a0 | `DrawRectOverlay_FiiiiUl` | snd989 |
| `assembly/textbin/fun_001f83a4` | 0x1f83a4 | `ScisAndRender` | drawquad |
| `assembly/textbin/fun_001fa728` | 0x1fa728 | `FastBSphereCheck` | fastfunc.s |
| `assembly/textbin/fun_001fb680` | 0x1fb680 | `AA_BlurPass__Fv` | game/framebuf.cpp |
| `assembly/textbin/fun_001fce28` | 0x1fce28 | `UpdateModeFreeze__Fv` | game/freeze.cpp |
| `assembly/textbin/fun_001fe898` | 0x1fe898 | `Help_DrawPrompt` | game/help.cpp |
| `assembly/textbin/fun_00200b10` | 0x200b10 | `Hud_sendTexture__FPciiiii` | hud.cpp |
| `assembly/textbin/fun_00201520` | 0x201520 | `LoadIRXModule` | init |
| `assembly/textbin/fun_00201f88` | 0x201f88 | `DetachPointLight__Fi` | lights |
| `assembly/textbin/fun_002049f0` | 0x2049f0 | `ParseSpaceSceneChunk__Fi` | loaders.cpp |
| `assembly/textbin/fun_00205640` | 0x205640 | `UNK_NoMapAvailable` | game/map.cpp |
| `assembly/textbin/fun_0020b618` | 0x20b618 | `FastDecompress` | miscproc |
| `assembly/textbin/fun_0020dc20` | 0x20dc20 | `UpdateMobyGrids` | mobyfunc |
| `assembly/textbin/fun_00211808` | 0x211808 | `MobyProc` | mobyproc |
| `assembly/textbin/fun_00216290` | 0x216290 | `music_Update__Fv` | music.cpp |
| `assembly/textbin/fun_00224368` | 0x224368 | `LoadHandGadget` | game/pause.cpp |
| `assembly/textbin/fun_0022a330` | 0x22a330 | `BuildShrubTextureDma` | game/shrub something |
| `assembly/textbin/fun_0022b928` | 0x22b928 | `SkyDrawShellGouraud` | skyfunc |
| `assembly/textbin/fun_0022c4c8` | 0x22c4c8 | `SkyBsphereCheck` | skyproc |
| `assembly/textbin/fun_0022de10` | 0x22de10 | `FUN_0022de10_rename` | sound |
| `assembly/textbin/fun_00231ff0` | 0x231ff0 | `DoSpaceTransition` | space.cpp |
| `assembly/textbin/fun_00232e40` | 0x232e40 | `Stash_SendData` | stash |
| `assembly/textbin/fun_002333a8` | 0x2333a8 | `DrawTfrag` | tfragfunc.cpp |
| `assembly/textbin/fun_00233d90` | 0x233d90 | `DMAC_VIF1_Disable__Fv` | vuchain.cpp |
| `assembly/textbin/fun_00234f98` | 0x234f98 | `LightTfrags` | game/initonce.cpp |
| `assembly/textbin/fun_00235990` | 0x235990 | `DrawTies_2` | tiefunc |
| `assembly/textbin/fun_00237370` | 0x237370 | `LightTies` | tieproc |
| `assembly/textbin/fun_0023afc0` | 0x23afc0 | `sendADPCM__FP9_AudioDec` | movie/audiodec.cpp |
| `assembly/textbin/fun_0023b810` | 0x23b810 | `cpy2area__FPUciT0iT0iT0i` | movie/read.cpp |
| `assembly/textbin/fun_0023c920` | 0x23c920 | `viBufGetTs__FP5ViBufP9TimeStamp` | movie/vibuf.cpp |
| `assembly/textbin/fun_0023d0a8` | 0x23d0a8 | `mpegNodata__FP7sceMpegP13sceMpegCbDataPv` | movie/videodec.cpp |
| `core/decrement_state_field` | 0x23d340 | `voBufDecCount__FP5VoBuf` | movie/vobuf.cpp |
| `core/get_state_table_word` | 0x23ba20 | `readBufEndGet__FP7ReadBufi` | movie/readbuf.cpp |
| `ee/initialize_dma_packet` | 0x1f7668 | `FontSetWindow` | fonts.cpp // |
| `textbin/fun_00216828` | 0x216828 | `Load` | stream.cpp |
| `textbin/fun_00217a10` | 0x217a10 | `UpdatePad__Fv` | pad.cpp |
