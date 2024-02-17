// shortdict = 2.40% [0 - 402 bytes]
// advnames = 2.56% [402 - 429 bytes]
// advdesc = 15.56% [831 - 2611 bytes]
// msgs = 49.68% [3442 - 8335 bytes]
// msgs2 = 0.01% [11777 - 1 bytes]
// verbs = 4.16% [11778 - 698 bytes]
// objs = 3.35% [12476 - 562 bytes]
// objs_dir = 0.60% [13038 - 100 bytes]
// rooms = 1.84% [13138 - 309 bytes]
// packdata = 1.91% [13447 - 320 bytes]
// opcode_vrbidx_dir = 0.86% [13767 - 144 bytes]
// opcode_vrbidx_data = 2.50% [13911 - 420 bytes]
// opcode_pos = 1.84% [14331 - 308 bytes]
// opcode_len = 0.92% [14639 - 154 bytes]
// opcode_data = 9.30% [14793 - 1560 bytes]
// roomnameid = 0.14% [16353 - 24 bytes]
// roomdescid = 0.14% [16377 - 24 bytes]
// roomimg = 0.14% [16401 - 24 bytes]
// roomovrimg = 0.00% [16425 - 0 bytes]
// objnameid = 0.39% [16425 - 66 bytes]
// objdescid = 0.39% [16491 - 66 bytes]
// objimg = 0.00% [16557 - 0 bytes]
// objattr = 0.39% [16557 - 66 bytes]
// objloc = 0.39% [16623 - 66 bytes]
// objattrex = 0.00% [16689 - 0 bytes]
// roomstart = 0.01% [16689 - 1 bytes]
// roomattr = 0.14% [16690 - 24 bytes]
// roomattrex = 0.32% [16714 - 53 bytes]
// bitvars = 0.02% [16767 - 3 bytes]
// vars = 0.05% [16770 - 8 bytes]
// imagesidx = 0.00% [16778 - 0 bytes]
// imagesdata = -100.00% [16778 - -16778 bytes]
#define room_start 0
#define room_introduction 1
#define room_end 2
#define room_hotelroom 3
#define room_hallway 4
#define room_elevator 5
#define room_hotelreception 6
#define room_archivebuilding 7
#define room_archives 8
#define room_emporium 9
#define room_palazzoducale 10
#define room_piazzaacquaverde 11
#define room_piazzadeferrari 12
#define room_piazzamanin 13
#define room_piazzaprincipestation 14
#define room_portofranco 15
#define room_viaassarotti 16
#define room_viaroma 17
#define room_villaraligotto 18
#define room_customs 19
#define room_darsena 20
#define room_harbourauthority 21
#define room_harbourstorage 22
#define room_office 23

#define obj_exits 0
#define obj_money 1
#define obj_paper 2
#define obj_window 3
#define obj_sheet 4
#define obj_me 5
#define obj_quill 6
#define obj_brochure 7
#define obj_grease 8
#define obj_telegram 9
#define obj_stamp 10
#define obj_headedpaper 11
#define obj_card 12
#define obj_letter 13
#define obj_order 14
#define obj_archives_employee 15
#define obj_hotelroom_mirror 16
#define obj_hotelroom_bed 17
#define obj_hotelroom_windows 18
#define obj_hotelroom_tapestry 19
#define obj_hotelroom_radiator 20
#define obj_hotelroom_washbowl 21
#define obj_hotelroom_burner 22
#define obj_hotelroom_light 23
#define obj_hallway_panels 24
#define obj_hallway_burner 25
#define obj_elevator_buttons 26
#define obj_elevator_door 27
#define obj_hotelreception_clerk 28
#define obj_hotelreception_windows 29
#define obj_hotelreception_curtains 30
#define obj_hotelreception_panels 31
#define obj_hotelreception_elevator 32
#define obj_archivebuilding_building 33
#define obj_emporium_clerk 34
#define obj_palazzoducale_operator 35
#define obj_palazzoducale_receiver 36
#define obj_palazzoducale_key 37
#define obj_palazzoducale_selector 38
#define obj_palazzoducale_plug 39
#define obj_palazzoducale_dossiers 40
#define obj_piazzaacquaverde_building 41
#define obj_piazzaacquaverde_twelve 42
#define obj_piazzaacquaverde_statue 43
#define obj_piazzaacquaverde_garden 44
#define obj_piazzadeferrari_building 45
#define obj_piazzadeferrari_statue 46
#define obj_piazzamanin_tree 47
#define obj_piazzamanin_tram 48
#define obj_piazzamanin_stone 49
#define obj_piazzaprincipestation_facade 50
#define obj_portofranco_booths 51
#define obj_portofranco_store 52
#define obj_portofranco_porch 53
#define obj_viaroma_building 54
#define obj_viaroma_tram 55
#define obj_villaraligotto_gate 56
#define obj_villaraligotto_handle 57
#define obj_villaraligotto_tree 58
#define obj_harbourauthority_officer 59
#define obj_harbourauthority_office 60
#define obj_harbourstorage_door 61
#define obj_harbourstorage_table 62
#define obj_harbourstorage_tram 63
#define obj_office_wastebin 64
#define obj_office_dossiers 65

#define vrb_onfirst 0
#define vrb_onenter 1
#define vrb_onleave 2
#define vrb_onturn 3
#define vrb_ondesc 4
#define vrb_u 5
#define vrb_d 6
#define vrb_s 7
#define vrb_n 8
#define vrb_w 9
#define vrb_e 10
#define vrb_se 11
#define vrb_sw 12
#define vrb_ne 13
#define vrb_nw 14
#define vrb_go 15
#define vrb_enter 16
#define vrb_x 17
#define vrb_l 18
#define vrb_take 19
#define vrb_drop 20
#define vrb_use 21
#define vrb_push 22
#define vrb_pull 23
#define vrb_open 24
#define vrb_close 25
#define vrb_lock 26
#define vrb_unlock 27
#define vrb_show 28
#define vrb_give 29
#define vrb_put 30
#define vrb_help 31
#define vrb_inventory 32
#define vrb_quit 33
#define vrb_restart 34
#define vrb_save 35
#define vrb_load 36
#define vrb_mem 37
#define vrb_gfx 38
#define vrb_talk 39
#define vrb_ask 40
#define vrb_break 41
#define vrb_bye 42
#define vrb_downstairs 43
#define vrb_drive 44
#define vrb_eat 45
#define vrb_fill 46
#define vrb_fuck 47
#define vrb_knock 48
#define vrb_move 49
#define vrb_pet 50
#define vrb_pick 51
#define vrb_play 52
#define vrb_pray 53
#define vrb_repair 54
#define vrb_run 55
#define vrb_shibboleth 56
#define vrb_sit 57
#define vrb_smell 58
#define vrb_turn 59
#define vrb_unwear 60
#define vrb_wash 61
#define vrb_wear 62
#define vrb_write 63
#define vrb_xyzzy 64
#define vrb_make 65
#define vrb_press 66
#define vrb_buy 67
#define vrb_thank 68
#define vrb_withobj:order 69

#define var_score 0
#define var_topscore 1
#define var_weight 2
#define var_maxweight 3
#define var_tmp 4
#define var_clues 5
#define var_varEB 6
#define var_officetimer 7

#define bitvar_bitDG 0
#define bitvar_greasedbrochure 1
#define bitvar_telegramread 2
#define bitvar_telegramforcar 3
#define bitvar_gotorderidea 4
#define bitvar_symbolseen 5
#define bitvar_addressknown 6
#define bitvar_telegramsent 7
#define bitvar_receivedsecondtelegram 8
#define bitvar_stridein 9
#define bitvar_investigateonhim 10
#define bitvar_receivedtelegram 11
#define bitvar_seencar 12
#define bitvar_harbouridea 13
#define bitvar_sheetfound 14
#define bitvar_gotgumpaper 15
#define bitvar_harbourideasaid 16
#define bitvar_bitEJ 17
#define bitvar_officereachable 18
#define bitvar_brochureondoor 19

#define attr_visible 1
#define attr_actor 2
#define attr_listable 4
#define attr_takeable 8
#define attr_large 16
#define attr_openable 32
#define attr_open 64

