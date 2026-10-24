// Growtopia x64 offsets - generated 2026-10-24 09:59:35Z
// image base 0x140000000  build hash 21deb8d21a9cdd8d
#pragma once
namespace gt {
    constexpr uintptr_t kSendPacket = 0x00C3F8E0; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    constexpr uintptr_t kSendPacketRaw = 0x00C3FA00; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    constexpr uintptr_t kProcessTankUpdatePacket = 0x00B3A380; // incoming PACKET_* dispatcher
    constexpr uintptr_t kVariantListSerializeFromMem = 0x0127D3E0; // VariantList::SerializeFromMem
    constexpr uintptr_t kPacketTypeDispatcher = 0x00A0A730; // 
    constexpr uintptr_t kPacketLengthValidator = 0x00C3C970; // 
    constexpr uintptr_t kTrackPacketSender = 0x00B6F930; // 
    constexpr uintptr_t kENetHostConnectSetup = 0x00A0A310; // 
    constexpr uintptr_t kPlayerItems_AddItem = 0x00C44840; // 
    constexpr uintptr_t kPlayerItems_HaveRoomForItem = 0x00C459D0; // 
    constexpr uintptr_t kPlayerItems_RemoveItem = 0x00C47150; // 
    constexpr uintptr_t kInventoryIllegalItemPurge = 0x00C472A0; // 
    constexpr uintptr_t kItemsDatLoader = 0x00C5B760; // 
    constexpr uintptr_t kItemValidator = 0x00C5B200; // 
    constexpr uintptr_t kItemHashCheck = 0x00C2CE90; // 
    constexpr uintptr_t kItemSurfaceRender = 0x00A3BBE0; // 
    constexpr uintptr_t kChooseVisual = 0x00C7BBC0; // 
    constexpr uintptr_t kWorld_Load = 0x0143AB90; // 
    constexpr uintptr_t kWorldVersionCheck = 0x00B3A380; // 
    constexpr uintptr_t kTileExtraParser = 0x00C6D090; // 
    constexpr uintptr_t kWhiteDoorLookup = 0x0143A390; // 
    constexpr uintptr_t kTilesheetLoader = 0x00A2AE20; // 
    constexpr uintptr_t kBgItemMapValidator = 0x00C5BFA0; // 
    constexpr uintptr_t kNetAvatar_OnAvatarBePaintBalled = 0x00AE33D0; // 
    constexpr uintptr_t kPunchHackDetector = 0x00AE7ED0; // 
    constexpr uintptr_t kPunchNoTileHandler = 0x009A8750; // 
    constexpr uintptr_t kHarvestInteraction = 0x00A13420; // 
    constexpr uintptr_t kCameraManager = 0x00A27250; // 
    constexpr uintptr_t kDialogBuilder = 0x00CF8790; // 
    constexpr uintptr_t kBannerDialogBuilder = 0x00D752B0; // 
    constexpr uintptr_t kEnableAllButtonsEntity = 0x011D67B0; // 
    constexpr uintptr_t kController_PushController = 0x00D89EE0; // 
    constexpr uintptr_t kController_PopController = 0x00D89CC0; // 
    constexpr uintptr_t kController_PushChildController = 0x01082530; // 
    constexpr uintptr_t kController_OnActivate = 0x00DC5320; // 
    constexpr uintptr_t kController_Deactivate = 0x00DC4F60; // 
    constexpr uintptr_t kController_Release = 0x0097DDB0; // 
    constexpr uintptr_t kUIController_OnActivate = 0x010D7550; // 
    constexpr uintptr_t kUIController_OnDeactivate = 0x010D7B40; // 
    constexpr uintptr_t kUIController_RemoveScreenView = 0x010D7DC0; // 
    constexpr uintptr_t kParticleEmitter_GetPaintballColor = 0x00E144A0; // 
    constexpr uintptr_t kRTFont_GetColorFromString = 0x00D62B80; // 
    constexpr uintptr_t kResourceManager_GetSurfaceResource = 0x01244490; // 
    constexpr uintptr_t kVideoModeManager_SetVideoMode = 0x00DB4770; // 
    constexpr uintptr_t kVideoModeManager_SetFullscreen = 0x00DB4080; // 
    constexpr uintptr_t kVideoModeManager_AddVideoMode = 0x00DB19B0; // self-naming anchor: AddVideoMode logs its own name once; a 5
    constexpr uintptr_t kVideoModeManager_GetCustomVideoModes = 0x00DB1F70; // 
    constexpr uintptr_t kVideoModeManager_OnWMSize = 0x00DB4150; // 
    constexpr uintptr_t kIAPManager_LoadCurrenciesConfig = 0x0119BEA0; // 
    constexpr uintptr_t kIAPManager_ctor = 0x011A81C0; // 
    constexpr uintptr_t kApp_Kill = 0x0097CCF0; // 
    constexpr uintptr_t kStoreBuyPacketPath = 0x00D71090; // 
    constexpr uintptr_t kTileCoordinateHandler = 0x009A6D00; // 
    constexpr uintptr_t kLogDisplayEntityBuilder = 0x011DA3A0; // NOT LogToConsole: the sole owner of this string also refs Ge
    constexpr uintptr_t kItemRendererXmlLoader = 0x00FC8CD0; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    constexpr uintptr_t kBattlePetConfigLoader = 0x00BC73C0; // 
    constexpr uintptr_t kOwlsOfAthenaPets_RenderPet = 0x0076F030; // 
    constexpr uintptr_t kFlying2Pets_RenderPet = 0x008E4F50; // 
    constexpr uintptr_t kScepter_RenderPet = 0x00697650; // 
    constexpr uintptr_t kOwlsOfAthenaPets_OnRespawned = 0x0075A120; // 
    constexpr uintptr_t kFlying2Pets_OnRespawned = 0x008CFB60; // 
    constexpr uintptr_t kFactionIconLoader = 0x00ADD9D0; // 
    constexpr uintptr_t kTextOverlayActionHandler = 0x00B36DE0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    constexpr uintptr_t kInventoryTabUI = 0x010A5C80; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    constexpr uintptr_t kCaptchaInputDialog = 0x00D07BE0; // 
    constexpr uintptr_t kWorldTileMap = 0x00C83460; // the tile-map container: dimensions + tile count
    constexpr uintptr_t kTileLookupGuard = 0x009BE110; // tile lookup / punch target resolution
    constexpr uintptr_t kTilesheetPageLoader = 0x00D09F90; // tile sheet texture loader
    constexpr uintptr_t kWorldValidation = 0x010EDFF0; // world validation pass
    constexpr uintptr_t kWeaponDamageTierText = 0x00C09D00; // weapon damage tier description
    constexpr uintptr_t kGrowtorialButton = 0x00CBDB50; // 
    constexpr uintptr_t kWorldLockText = 0x00AEF240; // 
    constexpr uintptr_t kSeedTreeItemPath = 0x00CE85D0; // 
    constexpr uintptr_t kTileDefinitionsLoader = 0x00C28360; // 
    constexpr uintptr_t kWeatherEffectText = 0x00C01450; // 
    constexpr uintptr_t kItemEffectVariantDispatcher = 0x00AF9CD0; // second On* dispatcher (43 handlers): item/cosmetic effect va
    constexpr uintptr_t kOnDeathEquipTagHandler = 0x00FCF640; // also OnEquipTag; death + equip-tag handling
    constexpr uintptr_t kOnDisconnectedHandler = 0x00B2FB50; // 
    constexpr uintptr_t kOnErrorFinishHandler = 0x00A69930; // also OnFinish
    constexpr uintptr_t kOnOverMoveHandler = 0x011B2EE0; // also OnOverEnd; hover/drag move
    constexpr uintptr_t kOnEventHandler = 0x01060AD0; // 
    constexpr uintptr_t kOnRenderHandler = 0x012235F0; // 
    constexpr uintptr_t kOnFakeScrollToEntity = 0x01215620; // 
    constexpr uintptr_t kOnButtonSelectedHandler = 0x00D0D830; // 
    constexpr uintptr_t kTradeHandler = 0x00D84640; // 
    constexpr uintptr_t kTradeOtherPlayerGuard = 0x00D82F00; // 
    constexpr uintptr_t kPartyMemberHandler = 0x00D48F40; // 
    constexpr uintptr_t kStateMachineTransitions = 0x01028F70; // item-renderer state-machine transitions
    constexpr uintptr_t kAnimCurveKeyFrameParser = 0x01004EF0; // animation curve/keyframe parser
    constexpr uintptr_t kSpriteAnimStateParser = 0x0100BE90; // sprite animation: playOnState/isLoop
    constexpr uintptr_t kAnimTimeParser = 0x010069E0; // 
    constexpr uintptr_t kParticleEmitterParser = 0x00E144A0; // particle emitter definitions
    constexpr uintptr_t kRendererConditionParser = 0x0102B3B0; // state-machine <Condition> evaluation
    constexpr uintptr_t kSpriteRenderParser = 0x008D5720; // 
    constexpr uintptr_t kLoginPacketBuilder = 0x00DC7660; // 
    constexpr uintptr_t kTileActionBuilder = 0x00AEA340; // 
    constexpr uintptr_t kDialogButtonBuilder = 0x010E6940; // 
    constexpr uintptr_t kNetAvatarSpawnHandler = 0x00B352D0; // 
    constexpr uintptr_t kGameUpdatePacketSerializer = 0x00A0C860; // 
    constexpr uintptr_t kNetAvatarNetIDEmitter = 0x00B32360; // 
    constexpr uintptr_t kIAPPurchaseValidation = 0x00D1E060; // 
    constexpr uintptr_t kOnVariantDispatcher = 0x00B294E0; // 
    constexpr uintptr_t kPunchAction = 0x00DE29B0; // 
    constexpr uintptr_t kGetApp = 0x009798F0; // leaf without unwind data; not a .pdata entry
    constexpr uintptr_t kGetClient = 0x00A0A2F0; // kAppClientOffset = 0xAD0 (derived)
    constexpr uintptr_t kGetPacketProcessor = 0x00B24090; // kAppPacketProcessorOffset = 0x1218 (derived)
    constexpr uintptr_t kGetLocalAvatar = 0x00B243F0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)
    constexpr uintptr_t kConstsArray = 0x022E3E80; // entry = [A,0,B,C]; value = 2A-B = B-C

    struct Binding { const char* name; unsigned int rva; };
    struct BindingTable { unsigned int rva; const Binding* rows; int count; };
    constexpr Binding kBind0[] = {
        {"_G", 0x015C1FA0},
        {"package", 0x015CD360},
        {"coroutine", 0x015C2610},
        {"table", 0x015C3580},
        {"io", 0x015C4D90},
        {"os", 0x015C5980},
        {"string", 0x015C9900},
        {"math", 0x015CB0C0},
        {"utf8", 0x015CA260},
        {"debug", 0x015CC500},
    };
    constexpr Binding kBind1[] = {
        {"assert", 0x015C0F30},
        {"collectgarbage", 0x015C18E0},
        {"dofile", 0x015C0EA0},
        {"error", 0x015C15F0},
        {"getmetatable", 0x015C1670},
        {"ipairs", 0x015C1C60},
        {"loadfile", 0x015C1CB0},
        {"load", 0x015C0DA0},
        {"next", 0x015C1B60},
        {"pairs", 0x015C1BC0},
        {"pcall", 0x015C10D0},
        {"print", 0x015C1260},
        {"warn", 0x015C1350},
        {"rawequal", 0x015C1780},
        {"rawlen", 0x015C17D0},
        {"rawget", 0x015C1830},
        {"rawset", 0x015C1880},
        {"select", 0x015C1010},
        {"setmetatable", 0x015C16D0},
        {"tonumber", 0x015C1400},
        {"tostring", 0x015C1230},
        {"type", 0x015C1B00},
        {"xpcall", 0x015C1170},
    };
    constexpr Binding kBind2[] = {
        {"create", 0x015C20D0},
        {"resume", 0x015C2020},
        {"running", 0x015C22B0},
        {"status", 0x015C21D0},
        {"wrap", 0x015C2130},
        {"yield", 0x015C21A0},
        {"isyieldable", 0x015C2240},
        {"close", 0x015C22E0},
    };
    constexpr Binding kBind3[] = {
        {"concat", 0x015C2BC0},
        {"insert", 0x015C2660},
        {"pack", 0x015C2DF0},
        {"unpack", 0x015C2EA0},
        {"remove", 0x015C27F0},
        {"move", 0x015C2970},
        {"sort", 0x015C2F90},
    };
    constexpr Binding kBind4[] = {
        {"close", 0x015C3E20},
        {"flush", 0x015C3BD0},
        {"input", 0x015C35D0},
        {"lines", 0x015C3740},
        {"open", 0x015C3F10},
        {"output", 0x015C3660},
        {"popen", 0x015C4050},
        {"read", 0x015C3860},
        {"tmpfile", 0x015C4130},
        {"type", 0x015C3CE0},
        {"write", 0x015C3930},
    };
    constexpr Binding kBind5[] = {
        {"read", 0x015C38D0},
        {"write", 0x015C39A0},
        {"lines", 0x015C36F0},
        {"flush", 0x015C3C60},
        {"seek", 0x015C3A10},
        {"close", 0x015C3DB0},
        {"setvbuf", 0x015C3B00},
    };
    constexpr Binding kBind6[] = {
        {"__gc", 0x015C3EB0},
        {"__close", 0x015C3EB0},
        {"__tostring", 0x015C3D50},
    };
    constexpr Binding kBind7[] = {
        {"clock", 0x015C56F0},
        {"date", 0x015C4FA0},
        {"difftime", 0x015C53B0},
        {"execute", 0x015C54F0},
        {"exit", 0x015C5470},
        {"getenv", 0x015C56B0},
        {"remove", 0x015C5560},
        {"rename", 0x015C55C0},
        {"setlocale", 0x015C5400},
        {"time", 0x015C5220},
        {"tmpname", 0x015C5640},
    };
    constexpr Binding kBind8[] = {
        {"byte", 0x015C5EA0},
        {"char", 0x015C5FC0},
        {"dump", 0x015C60A0},
    };
    constexpr Binding kBind9[] = {
        {"format", 0x015C65D0},
        {"gmatch", 0x015C6270},
        {"gsub", 0x015C6380},
        {"len", 0x015C59D0},
        {"lower", 0x015C5B90},
    };
    constexpr Binding kBind10[] = {
        {"rep", 0x015C5D10},
        {"reverse", 0x015C5AF0},
        {"sub", 0x015C5A00},
        {"upper", 0x015C5C50},
        {"pack", 0x015C6E10},
        {"packsize", 0x015C74E0},
        {"unpack", 0x015C7680},
    };
    constexpr Binding kBind11[] = {
        {"offset", 0x015C9E70},
        {"codepoint", 0x015C9B40},
        {"char", 0x015C9D50},
        {"len", 0x015C99D0},
        {"codes", 0x015C9FF0},
    };
    constexpr Binding kBind12[] = {
        {"abs", 0x015CA2E0},
        {"acos", 0x015CA410},
        {"asin", 0x015CA3E0},
        {"atan", 0x015CA440},
        {"ceil", 0x015CA580},
        {"cos", 0x015CA380},
        {"deg", 0x015CA950},
        {"exp", 0x015CA920},
        {"tointeger", 0x015CA4A0},
        {"floor", 0x015CA500},
        {"fmod", 0x015CA600},
        {"ult", 0x015CA810},
        {"log", 0x015CA860},
        {"max", 0x015CAA70},
        {"min", 0x015CA9D0},
        {"modf", 0x015CA700},
        {"rad", 0x015CA990},
        {"sin", 0x015CA350},
        {"sqrt", 0x015CA7D0},
        {"tan", 0x015CA3B0},
        {"type", 0x015CAB10},
    };
    constexpr Binding kBind13[] = {
        {"debug", 0x015CC160},
        {"getuservalue", 0x015CB2C0},
        {"gethook", 0x015CBFE0},
        {"getinfo", 0x015CB3C0},
        {"getlocal", 0x015CB850},
        {"getregistry", 0x015CB200},
        {"getmetatable", 0x015CB220},
        {"getupvalue", 0x015CBB40},
        {"upvaluejoin", 0x015CBCD0},
        {"upvalueid", 0x015CBC50},
        {"setuservalue", 0x015CB340},
        {"sethook", 0x015CBDF0},
        {"setlocal", 0x015CB9D0},
        {"setmetatable", 0x015CB260},
        {"setupvalue", 0x015CBBC0},
        {"traceback", 0x015CC350},
        {"setcstacklimit", 0x015CC420},
    };
    constexpr Binding kBind14[] = {
        {"CreateContext", 0x01595720},
        {"LoadFontFace", 0x01595840},
        {"RegisterTag", 0x01595980},
    };
    constexpr Binding kBind15[] = {
        {"contexts", 0x01595A80},
        {"key_identifier", 0x01595AC0},
        {"key_modifier", 0x01595B00},
    };
    constexpr Binding kBind16[] = {
        {"red", 0x01597810},
        {"green", 0x01597860},
        {"blue", 0x015978B0},
        {"alpha", 0x01597900},
        {"rgba", 0x01597950},
    };
    constexpr Binding kBind17[] = {
        {"red", 0x015979D0},
        {"green", 0x01597A30},
        {"blue", 0x01597A90},
        {"alpha", 0x01597AF0},
        {"rgba", 0x01597B50},
    };
    constexpr Binding kBind18[] = {
        {"red", 0x01598220},
        {"green", 0x01598270},
        {"blue", 0x015982C0},
        {"alpha", 0x01598310},
        {"rgba", 0x01598360},
    };
    constexpr Binding kBind19[] = {
        {"red", 0x015983F0},
        {"green", 0x01598460},
        {"blue", 0x015984D0},
        {"alpha", 0x01598540},
        {"rgba", 0x015985B0},
    };
    constexpr Binding kBind20[] = {
        {"AddEventListener", 0x01598F00},
        {"CreateDocument", 0x01599410},
        {"LoadDocument", 0x01599520},
        {"Render", 0x01599610},
        {"UnloadAllDocuments", 0x01599640},
        {"UnloadDocument", 0x01599660},
        {"Update", 0x015996A0},
        {"OpenDataModel", 0x01598AB0},
        {"ProcessMouseMove", 0x01598AF0},
        {"ProcessMouseButtonDown", 0x01598B70},
        {"ProcessMouseButtonUp", 0x01598BD0},
        {"ProcessMouseWheel", 0x01598C30},
        {"ProcessMouseLeave", 0x01598CA0},
        {"IsMouseInteracting", 0x01598CD0},
        {"ProcessKeyDown", 0x01598D00},
        {"ProcessKeyUp", 0x01598D60},
        {"ProcessTextInput", 0x01598DC0},
    };
    constexpr Binding kBind21[] = {
        {"dimensions", 0x015996D0},
        {"documents", 0x01599740},
        {"dp_ratio", 0x015997B0},
        {"focus_element", 0x015997F0},
        {"hover_element", 0x01599850},
        {"name", 0x015998B0},
        {"root_element", 0x01599910},
    };
    constexpr Binding kBind22[] = {
        {"PullToFront", 0x0159A5E0},
        {"PushToBack", 0x0159A600},
        {"Show", 0x0159A620},
        {"Hide", 0x0159A6A0},
        {"Close", 0x0159A6C0},
        {"CreateElement", 0x0159A6E0},
        {"CreateTextNode", 0x0159A850},
    };
    constexpr Binding kBind23[] = {
        {"AddEventListener", 0x0159B230},
        {"AppendChild", 0x0159B490},
        {"Blur", 0x0159B590},
        {"Click", 0x0159B5B0},
        {"DispatchEvent", 0x0159B5D0},
        {"Focus", 0x0159BB20},
        {"GetAttribute", 0x0159BB40},
        {"GetElementById", 0x0159BC30},
        {"GetElementsByTagName", 0x0159BD20},
        {"QuerySelector", 0x0159C030},
        {"QuerySelectorAll", 0x0159C120},
        {"Matches", 0x0159C430},
        {"HasAttribute", 0x0159C500},
        {"HasChildNodes", 0x0159C5D0},
        {"InsertBefore", 0x0159C600},
        {"IsClassSet", 0x0159C720},
        {"RemoveAttribute", 0x0159C7F0},
        {"RemoveChild", 0x0159C8B0},
        {"ReplaceChild", 0x0159C920},
        {"ScrollIntoView", 0x0159CA50},
        {"SetAttribute", 0x0159CA80},
        {"SetClass", 0x0159CBF0},
    };
    constexpr Binding kBind24[] = {
        {"attributes", 0x0159CCE0},
        {"child_nodes", 0x0159CD50},
        {"class_name", 0x0159CDC0},
        {"client_left", 0x0159CE80},
        {"client_height", 0x0159CEE0},
        {"client_top", 0x0159CF40},
        {"client_width", 0x0159CFA0},
        {"first_child", 0x0159D000},
        {"id", 0x0159D060},
        {"inner_rml", 0x0159D0C0},
        {"last_child", 0x0159D170},
        {"next_sibling", 0x0159D1D0},
        {"offset_height", 0x0159D230},
        {"offset_left", 0x0159D290},
        {"offset_parent", 0x0159D2F0},
        {"offset_top", 0x0159D350},
        {"offset_width", 0x0159D3B0},
        {"owner_document", 0x0159D410},
        {"parent_node", 0x0159D470},
        {"previous_sibling", 0x0159D4D0},
        {"scroll_height", 0x0159D530},
        {"scroll_left", 0x0159D590},
        {"scroll_top", 0x0159D5F0},
        {"scroll_width", 0x0159D650},
        {"style", 0x0159D6B0},
        {"tag_name", 0x0159D720},
    };
    constexpr Binding kBind25[] = {
        {"class_name", 0x0159D780},
        {"id", 0x0159D870},
        {"inner_rml", 0x0159D960},
        {"scroll_left", 0x0159DA60},
        {"scroll_top", 0x0159DAD0},
    };
    constexpr Binding kBind26[] = {
        {"current_element", 0x0159FA80},
        {"type", 0x0159FAE0},
        {"target_element", 0x0159FCC0},
        {"parameters", 0x0159FD20},
    };
    constexpr Binding kBind27[] = {
        {"DotProduct", 0x015A0AB0},
        {"Normalise", 0x015A0B20},
        {"Rotate", 0x015A0BD0},
    };
    constexpr Binding kBind28[] = {
        {"x", 0x015A0CA0},
        {"y", 0x015A0CF0},
        {"magnitude", 0x015A0D40},
    };
    constexpr Binding kBind29[] = {
        {"x", 0x015A15A0},
        {"y", 0x015A15F0},
        {"magnitude", 0x015A1640},
    };
    constexpr Binding kBind30[] = {
        {"disabled", 0x015A2170},
        {"name", 0x015A21C0},
        {"value", 0x015A2270},
    };
    constexpr Binding kBind31[] = {
        {"disabled", 0x015A2330},
        {"name", 0x015A23A0},
        {"value", 0x015A2490},
    };
    constexpr Binding kBind32[] = {
        {"Select", 0x015A28E0},
        {"SetSelection", 0x015A2900},
        {"GetSelection", 0x015A2950},
    };
    constexpr Binding kBind33[] = {
        {"checked", 0x015A2A30},
        {"maxlength", 0x015A2B20},
        {"size", 0x015A2C20},
        {"max", 0x015A2D10},
        {"min", 0x015A2E00},
        {"step", 0x015A2EF0},
    };
    constexpr Binding kBind34[] = {
        {"checked", 0x015A2FE0},
        {"maxlength", 0x015A3140},
        {"size", 0x015A3240},
        {"max", 0x015A3330},
        {"min", 0x015A3430},
        {"step", 0x015A3530},
    };
    constexpr Binding kBind35[] = {
        {"Add", 0x015A3B10},
        {"Remove", 0x015A3CC0},
        {"RemoveAll", 0x015A3E10},
    };
    constexpr Binding kBind36[] = {
        {"Select", 0x015A4370},
        {"SetSelection", 0x015A4390},
        {"GetSelection", 0x015A43E0},
    };
    constexpr Binding kBind37[] = {
        {"cols", 0x015A44C0},
        {"maxlength", 0x015A4510},
        {"rows", 0x015A4560},
        {"wordwrap", 0x015A45B0},
    };
    constexpr Binding kBind38[] = {
        {"cols", 0x015A4600},
        {"maxlength", 0x015A4660},
        {"rows", 0x015A46C0},
        {"wordwrap", 0x015A4720},
    };
    constexpr BindingTable kBindingTables[] = {
        {0x01DA26C0, kBind0, 10},
        {0x01DA3360, kBind1, 23},
        {0x01DA3790, kBind2, 8},
        {0x01DA3990, kBind3, 7},
        {0x01DA3B20, kBind4, 11},
        {0x01DA3BE0, kBind5, 7},
        {0x01DA3C70, kBind6, 3},
        {0x01DA3FE0, kBind7, 11},
        {0x01DA4270, kBind8, 3},
        {0x01DA42B0, kBind9, 5},
        {0x01DA4310, kBind10, 7},
        {0x01DA4960, kBind11, 5},
        {0x01DA4A80, kBind12, 21},
        {0x01DA4D00, kBind13, 17},
        {0x02220860, kBind14, 3},
        {0x022208A0, kBind15, 3},
        {0x022208E0, kBind16, 5},
        {0x02220940, kBind17, 5},
        {0x022209A0, kBind18, 5},
        {0x02220A00, kBind19, 5},
        {0x02220A60, kBind20, 17},
        {0x02220B80, kBind21, 7},
        {0x02220C50, kBind22, 7},
        {0x02220D20, kBind23, 22},
        {0x02220E90, kBind24, 26},
        {0x02221040, kBind25, 5},
        {0x02221170, kBind26, 4},
        {0x022211C0, kBind27, 3},
        {0x02221200, kBind28, 3},
        {0x02221270, kBind29, 3},
        {0x02221300, kBind30, 3},
        {0x02221340, kBind31, 3},
        {0x02221380, kBind32, 3},
        {0x022213C0, kBind33, 6},
        {0x02221430, kBind34, 6},
        {0x022214A0, kBind35, 3},
        {0x02221530, kBind36, 3},
        {0x02221570, kBind37, 4},
        {0x022215C0, kBind38, 4},
    };
}
