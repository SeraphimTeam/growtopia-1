// Growtopia x64 offsets - generated 2026-10-02 11:31:57Z
// image base 0x140000000  build hash 332e43cd7521e6fe
#pragma once
namespace gt {
    constexpr uintptr_t kSendPacket = 0x00C47300; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    constexpr uintptr_t kSendPacketRaw = 0x00C47420; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    constexpr uintptr_t kProcessTankUpdatePacket = 0x00B43C90; // incoming PACKET_* dispatcher
    constexpr uintptr_t kVariantListSerializeFromMem = 0x0128D930; // VariantList::SerializeFromMem
    constexpr uintptr_t kPacketTypeDispatcher = 0x00A16AD0; // 
    constexpr uintptr_t kPacketLengthValidator = 0x00C44390; // 
    constexpr uintptr_t kTrackPacketSender = 0x00B78EE0; // 
    constexpr uintptr_t kENetHostConnectSetup = 0x00A166B0; // 
    constexpr uintptr_t kPlayerItems_AddItem = 0x00C4C200; // 
    constexpr uintptr_t kPlayerItems_HaveRoomForItem = 0x00C4D390; // 
    constexpr uintptr_t kPlayerItems_RemoveItem = 0x00C4EB10; // 
    constexpr uintptr_t kInventoryIllegalItemPurge = 0x00C4EC60; // 
    constexpr uintptr_t kItemsDatLoader = 0x00C63120; // 
    constexpr uintptr_t kItemValidator = 0x00C62BC0; // 
    constexpr uintptr_t kItemHashCheck = 0x00C34940; // 
    constexpr uintptr_t kItemSurfaceRender = 0x00A47F80; // 
    constexpr uintptr_t kChooseVisual = 0x00C83580; // 
    constexpr uintptr_t kWorld_Load = 0x0145FFE0; // 
    constexpr uintptr_t kWorldVersionCheck = 0x00B43C90; // 
    constexpr uintptr_t kTileExtraParser = 0x00C74A50; // 
    constexpr uintptr_t kWhiteDoorLookup = 0x0145F7E0; // 
    constexpr uintptr_t kTilesheetLoader = 0x00A371C0; // 
    constexpr uintptr_t kBgItemMapValidator = 0x00C63960; // 
    constexpr uintptr_t kNetAvatar_OnAvatarBePaintBalled = 0x00AEFB90; // 
    constexpr uintptr_t kPunchHackDetector = 0x00AF4690; // 
    constexpr uintptr_t kPunchNoTileHandler = 0x009B4FF0; // 
    constexpr uintptr_t kHarvestInteraction = 0x00A1F7C0; // 
    constexpr uintptr_t kCameraManager = 0x00A335F0; // 
    constexpr uintptr_t kDialogBuilder = 0x00CFDDF0; // 
    constexpr uintptr_t kBannerDialogBuilder = 0x00D77D80; // 
    constexpr uintptr_t kEnableAllButtonsEntity = 0x011E3A10; // 
    constexpr uintptr_t kController_PushController = 0x00D8D4A0; // 
    constexpr uintptr_t kController_PopController = 0x00D8D280; // 
    constexpr uintptr_t kController_PushChildController = 0x010924B0; // 
    constexpr uintptr_t kController_OnActivate = 0x00DC88D0; // 
    constexpr uintptr_t kController_Deactivate = 0x00DC8510; // 
    constexpr uintptr_t kController_Release = 0x00989880; // 
    constexpr uintptr_t kUIController_OnActivate = 0x010E6760; // 
    constexpr uintptr_t kUIController_OnDeactivate = 0x010E6D50; // 
    constexpr uintptr_t kUIController_RemoveScreenView = 0x010E6FD0; // 
    constexpr uintptr_t kParticleEmitter_GetPaintballColor = 0x00E17C60; // 
    constexpr uintptr_t kRTFont_GetColorFromString = 0x00D65360; // 
    constexpr uintptr_t kResourceManager_GetSurfaceResource = 0x012551F0; // 
    constexpr uintptr_t kVideoModeManager_SetVideoMode = 0x00DB7D30; // 
    constexpr uintptr_t kVideoModeManager_SetFullscreen = 0x00DB7640; // 
    constexpr uintptr_t kVideoModeManager_AddVideoMode = 0x00DB4F70; // self-naming anchor: AddVideoMode logs its own name once; a 5
    constexpr uintptr_t kVideoModeManager_GetCustomVideoModes = 0x00DB5530; // 
    constexpr uintptr_t kVideoModeManager_OnWMSize = 0x00DB7710; // 
    constexpr uintptr_t kIAPManager_LoadCurrenciesConfig = 0x011A92E0; // 
    constexpr uintptr_t kIAPManager_ctor = 0x011B5410; // 
    constexpr uintptr_t kApp_Kill = 0x00988820; // 
    constexpr uintptr_t kStoreBuyPacketPath = 0x00D74050; // 
    constexpr uintptr_t kTileCoordinateHandler = 0x009B35A0; // 
    constexpr uintptr_t kLogDisplayEntityBuilder = 0x011E7600; // NOT LogToConsole: the sole owner of this string also refs Ge
    constexpr uintptr_t kItemRendererXmlLoader = 0x00FD54F0; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    constexpr uintptr_t kBattlePetConfigLoader = 0x00BCF3A0; // 
    constexpr uintptr_t kOwlsOfAthenaPets_RenderPet = 0x0077A160; // 
    constexpr uintptr_t kFlying2Pets_RenderPet = 0x008F0040; // 
    constexpr uintptr_t kScepter_RenderPet = 0x006A2790; // 
    constexpr uintptr_t kOwlsOfAthenaPets_OnRespawned = 0x00765250; // 
    constexpr uintptr_t kFlying2Pets_OnRespawned = 0x008DAC50; // 
    constexpr uintptr_t kFactionIconLoader = 0x00AEA1D0; // 
    constexpr uintptr_t kPlayerProgression = 0x016ACDA0; // 
    constexpr uintptr_t kTextOverlayActionHandler = 0x00B405E0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    constexpr uintptr_t kInventoryTabUI = 0x010B54A0; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    constexpr uintptr_t kCaptchaInputDialog = 0x00D0D240; // 
    constexpr uintptr_t kAuthClient_Login = 0x016C20D0; // 
    constexpr uintptr_t kWorldTileMap = 0x00C8AE20; // the tile-map container: dimensions + tile count
    constexpr uintptr_t kTileLookupGuard = 0x009CA9B0; // tile lookup / punch target resolution
    constexpr uintptr_t kTilesheetPageLoader = 0x00D0F5F0; // tile sheet texture loader
    constexpr uintptr_t kWorldValidation = 0x010FCD20; // world validation pass
    constexpr uintptr_t kWeaponDamageTierText = 0x00C11CE0; // weapon damage tier description
    constexpr uintptr_t kGrowtorialButton = 0x00CC2FB0; // 
    constexpr uintptr_t kWorldLockText = 0x00AFBA00; // 
    constexpr uintptr_t kSeedTreeItemPath = 0x00CEDC30; // 
    constexpr uintptr_t kTileDefinitionsLoader = 0x00C2FEB0; // 
    constexpr uintptr_t kWeatherEffectText = 0x00C09430; // 
    constexpr uintptr_t kItemEffectVariantDispatcher = 0x00B04610; // second On* dispatcher (43 handlers): item/cosmetic effect va
    constexpr uintptr_t kOnDeathEquipTagHandler = 0x00FDBE60; // also OnEquipTag; death + equip-tag handling
    constexpr uintptr_t kOnDisconnectedHandler = 0x00B39740; // 
    constexpr uintptr_t kOnErrorFinishHandler = 0x00A75CD0; // also OnFinish
    constexpr uintptr_t kOnOverMoveHandler = 0x011C0140; // also OnOverEnd; hover/drag move
    constexpr uintptr_t kOnEventHandler = 0x0106CF80; // 
    constexpr uintptr_t kOnRenderHandler = 0x01234350; // 
    constexpr uintptr_t kOnFakeScrollToEntity = 0x01226380; // 
    constexpr uintptr_t kOnDeleteHandler = 0x01718150; // 
    constexpr uintptr_t kOnButtonSelectedHandler = 0x00D12EF0; // 
    constexpr uintptr_t kTradeHandler = 0x00D87C00; // 
    constexpr uintptr_t kTradeOtherPlayerGuard = 0x00D864C0; // 
    constexpr uintptr_t kPartyMemberHandler = 0x00D4E6C0; // 
    constexpr uintptr_t kStateMachineTransitions = 0x010357B0; // item-renderer state-machine transitions
    constexpr uintptr_t kAnimCurveKeyFrameParser = 0x01011710; // animation curve/keyframe parser
    constexpr uintptr_t kSpriteAnimStateParser = 0x010186B0; // sprite animation: playOnState/isLoop
    constexpr uintptr_t kAnimTimeParser = 0x01013200; // 
    constexpr uintptr_t kParticleEmitterParser = 0x00E17C60; // particle emitter definitions
    constexpr uintptr_t kRendererConditionParser = 0x01037BF0; // state-machine <Condition> evaluation
    constexpr uintptr_t kSpriteRenderParser = 0x008E0810; // 
    constexpr uintptr_t kLoginPacketBuilder = 0x00DCAC10; // 
    constexpr uintptr_t kTileActionBuilder = 0x00AF6B00; // 
    constexpr uintptr_t kDialogButtonBuilder = 0x010F5680; // 
    constexpr uintptr_t kNetAvatarSpawnHandler = 0x00B3EAD0; // 
    constexpr uintptr_t kGameUpdatePacketSerializer = 0x00A18C00; // 
    constexpr uintptr_t kNetAvatarNetIDEmitter = 0x00B3BF50; // 
    constexpr uintptr_t kIAPPurchaseValidation = 0x00D23720; // 
    constexpr uintptr_t kOnVariantDispatcher = 0x00B330D0; // 
    constexpr uintptr_t kPunchAction = 0x00DE6120; // 
    constexpr uintptr_t kGetApp = 0x00985380; // leaf without unwind data; not a .pdata entry
    constexpr uintptr_t kGetClient = 0x00A16690; // kAppClientOffset = 0xB10 (derived)
    constexpr uintptr_t kGetPacketProcessor = 0x00B2DE10; // kAppPacketProcessorOffset = 0x1258 (derived)
    constexpr uintptr_t kGetLocalAvatar = 0x00B2DFE0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)
    constexpr uintptr_t kConstsArray = 0x0253BE90; // entry = [A,0,B,C]; value = 2A-B = B-C

    struct Binding { const char* name; unsigned int rva; };
    struct BindingTable { unsigned int rva; const Binding* rows; int count; };
    constexpr Binding kBind0[] = {
        {"_G", 0x015E76F0},
        {"package", 0x015F2AB0},
        {"coroutine", 0x015E7D60},
        {"table", 0x015E8CD0},
        {"io", 0x015EA4E0},
        {"os", 0x015EB0D0},
        {"string", 0x015EF050},
        {"math", 0x015F0810},
        {"utf8", 0x015EF9B0},
        {"debug", 0x015F1C50},
    };
    constexpr Binding kBind1[] = {
        {"assert", 0x015E6680},
        {"collectgarbage", 0x015E7030},
        {"dofile", 0x015E65F0},
        {"error", 0x015E6D40},
        {"getmetatable", 0x015E6DC0},
        {"ipairs", 0x015E73B0},
        {"loadfile", 0x015E7400},
        {"load", 0x015E64F0},
        {"next", 0x015E72B0},
        {"pairs", 0x015E7310},
        {"pcall", 0x015E6820},
        {"print", 0x015E69B0},
        {"warn", 0x015E6AA0},
        {"rawequal", 0x015E6ED0},
        {"rawlen", 0x015E6F20},
        {"rawget", 0x015E6F80},
        {"rawset", 0x015E6FD0},
        {"select", 0x015E6760},
        {"setmetatable", 0x015E6E20},
        {"tonumber", 0x015E6B50},
        {"tostring", 0x015E6980},
        {"type", 0x015E7250},
        {"xpcall", 0x015E68C0},
    };
    constexpr Binding kBind2[] = {
        {"create", 0x015E7820},
        {"resume", 0x015E7770},
        {"running", 0x015E7A00},
        {"status", 0x015E7920},
        {"wrap", 0x015E7880},
        {"yield", 0x015E78F0},
        {"isyieldable", 0x015E7990},
        {"close", 0x015E7A30},
    };
    constexpr Binding kBind3[] = {
        {"concat", 0x015E8310},
        {"insert", 0x015E7DB0},
        {"pack", 0x015E8540},
        {"unpack", 0x015E85F0},
        {"remove", 0x015E7F40},
        {"move", 0x015E80C0},
        {"sort", 0x015E86E0},
    };
    constexpr Binding kBind4[] = {
        {"close", 0x015E9570},
        {"flush", 0x015E9320},
        {"input", 0x015E8D20},
        {"lines", 0x015E8E90},
        {"open", 0x015E9660},
        {"output", 0x015E8DB0},
        {"popen", 0x015E97A0},
        {"read", 0x015E8FB0},
        {"tmpfile", 0x015E9880},
        {"type", 0x015E9430},
        {"write", 0x015E9080},
    };
    constexpr Binding kBind5[] = {
        {"read", 0x015E9020},
        {"write", 0x015E90F0},
        {"lines", 0x015E8E40},
        {"flush", 0x015E93B0},
        {"seek", 0x015E9160},
        {"close", 0x015E9500},
        {"setvbuf", 0x015E9250},
    };
    constexpr Binding kBind6[] = {
        {"__gc", 0x015E9600},
        {"__close", 0x015E9600},
        {"__tostring", 0x015E94A0},
    };
    constexpr Binding kBind7[] = {
        {"clock", 0x015EAE40},
        {"date", 0x015EA6F0},
        {"difftime", 0x015EAB00},
        {"execute", 0x015EAC40},
        {"exit", 0x015EABC0},
        {"getenv", 0x015EAE00},
        {"remove", 0x015EACB0},
        {"rename", 0x015EAD10},
        {"setlocale", 0x015EAB50},
        {"time", 0x015EA970},
        {"tmpname", 0x015EAD90},
    };
    constexpr Binding kBind8[] = {
        {"byte", 0x015EB5F0},
        {"char", 0x015EB710},
        {"dump", 0x015EB7F0},
    };
    constexpr Binding kBind9[] = {
        {"format", 0x015EBD20},
        {"gmatch", 0x015EB9C0},
        {"gsub", 0x015EBAD0},
        {"len", 0x015EB120},
        {"lower", 0x015EB2E0},
    };
    constexpr Binding kBind10[] = {
        {"rep", 0x015EB460},
        {"reverse", 0x015EB240},
        {"sub", 0x015EB150},
        {"upper", 0x015EB3A0},
        {"pack", 0x015EC560},
        {"packsize", 0x015ECC30},
        {"unpack", 0x015ECDD0},
    };
    constexpr Binding kBind11[] = {
        {"offset", 0x015EF5C0},
        {"codepoint", 0x015EF290},
        {"char", 0x015EF4A0},
        {"len", 0x015EF120},
        {"codes", 0x015EF740},
    };
    constexpr Binding kBind12[] = {
        {"abs", 0x015EFA30},
        {"acos", 0x015EFB60},
        {"asin", 0x015EFB30},
        {"atan", 0x015EFB90},
        {"ceil", 0x015EFCD0},
        {"cos", 0x015EFAD0},
        {"deg", 0x015F00A0},
        {"exp", 0x015F0070},
        {"tointeger", 0x015EFBF0},
        {"floor", 0x015EFC50},
        {"fmod", 0x015EFD50},
        {"ult", 0x015EFF60},
        {"log", 0x015EFFB0},
        {"max", 0x015F01C0},
        {"min", 0x015F0120},
        {"modf", 0x015EFE50},
        {"rad", 0x015F00E0},
        {"sin", 0x015EFAA0},
        {"sqrt", 0x015EFF20},
        {"tan", 0x015EFB00},
        {"type", 0x015F0260},
    };
    constexpr Binding kBind13[] = {
        {"debug", 0x015F18B0},
        {"getuservalue", 0x015F0A10},
        {"gethook", 0x015F1730},
        {"getinfo", 0x015F0B10},
        {"getlocal", 0x015F0FA0},
        {"getregistry", 0x015F0950},
        {"getmetatable", 0x015F0970},
        {"getupvalue", 0x015F1290},
        {"upvaluejoin", 0x015F1420},
        {"upvalueid", 0x015F13A0},
        {"setuservalue", 0x015F0A90},
        {"sethook", 0x015F1540},
        {"setlocal", 0x015F1120},
        {"setmetatable", 0x015F09B0},
        {"setupvalue", 0x015F1310},
        {"traceback", 0x015F1AA0},
        {"setcstacklimit", 0x015F1B70},
    };
    constexpr Binding kBind14[] = {
        {"CreateContext", 0x015BAE70},
        {"LoadFontFace", 0x015BAF90},
        {"RegisterTag", 0x015BB0D0},
    };
    constexpr Binding kBind15[] = {
        {"contexts", 0x015BB1D0},
        {"key_identifier", 0x015BB210},
        {"key_modifier", 0x015BB250},
    };
    constexpr Binding kBind16[] = {
        {"red", 0x015BCF60},
        {"green", 0x015BCFB0},
        {"blue", 0x015BD000},
        {"alpha", 0x015BD050},
        {"rgba", 0x015BD0A0},
    };
    constexpr Binding kBind17[] = {
        {"red", 0x015BD120},
        {"green", 0x015BD180},
        {"blue", 0x015BD1E0},
        {"alpha", 0x015BD240},
        {"rgba", 0x015BD2A0},
    };
    constexpr Binding kBind18[] = {
        {"red", 0x015BD970},
        {"green", 0x015BD9C0},
        {"blue", 0x015BDA10},
        {"alpha", 0x015BDA60},
        {"rgba", 0x015BDAB0},
    };
    constexpr Binding kBind19[] = {
        {"red", 0x015BDB40},
        {"green", 0x015BDBB0},
        {"blue", 0x015BDC20},
        {"alpha", 0x015BDC90},
        {"rgba", 0x015BDD00},
    };
    constexpr Binding kBind20[] = {
        {"AddEventListener", 0x015BE650},
        {"CreateDocument", 0x015BEB60},
        {"LoadDocument", 0x015BEC70},
        {"Render", 0x015BED60},
        {"UnloadAllDocuments", 0x015BED90},
        {"UnloadDocument", 0x015BEDB0},
        {"Update", 0x015BEDF0},
        {"OpenDataModel", 0x015BE200},
        {"ProcessMouseMove", 0x015BE240},
        {"ProcessMouseButtonDown", 0x015BE2C0},
        {"ProcessMouseButtonUp", 0x015BE320},
        {"ProcessMouseWheel", 0x015BE380},
        {"ProcessMouseLeave", 0x015BE3F0},
        {"IsMouseInteracting", 0x015BE420},
        {"ProcessKeyDown", 0x015BE450},
        {"ProcessKeyUp", 0x015BE4B0},
        {"ProcessTextInput", 0x015BE510},
    };
    constexpr Binding kBind21[] = {
        {"dimensions", 0x015BEE20},
        {"documents", 0x015BEE90},
        {"dp_ratio", 0x015BEF00},
        {"focus_element", 0x015BEF40},
        {"hover_element", 0x015BEFA0},
        {"name", 0x015BF000},
        {"root_element", 0x015BF060},
    };
    constexpr Binding kBind22[] = {
        {"PullToFront", 0x015BFD30},
        {"PushToBack", 0x015BFD50},
        {"Show", 0x015BFD70},
        {"Hide", 0x015BFDF0},
        {"Close", 0x015BFE10},
        {"CreateElement", 0x015BFE30},
        {"CreateTextNode", 0x015BFFA0},
    };
    constexpr Binding kBind23[] = {
        {"AddEventListener", 0x015C0980},
        {"AppendChild", 0x015C0BE0},
        {"Blur", 0x015C0CE0},
        {"Click", 0x015C0D00},
        {"DispatchEvent", 0x015C0D20},
        {"Focus", 0x015C1270},
        {"GetAttribute", 0x015C1290},
        {"GetElementById", 0x015C1380},
        {"GetElementsByTagName", 0x015C1470},
        {"QuerySelector", 0x015C1780},
        {"QuerySelectorAll", 0x015C1870},
        {"Matches", 0x015C1B80},
        {"HasAttribute", 0x015C1C50},
        {"HasChildNodes", 0x015C1D20},
        {"InsertBefore", 0x015C1D50},
        {"IsClassSet", 0x015C1E70},
        {"RemoveAttribute", 0x015C1F40},
        {"RemoveChild", 0x015C2000},
        {"ReplaceChild", 0x015C2070},
        {"ScrollIntoView", 0x015C21A0},
        {"SetAttribute", 0x015C21D0},
        {"SetClass", 0x015C2340},
    };
    constexpr Binding kBind24[] = {
        {"attributes", 0x015C2430},
        {"child_nodes", 0x015C24A0},
        {"class_name", 0x015C2510},
        {"client_left", 0x015C25D0},
        {"client_height", 0x015C2630},
        {"client_top", 0x015C2690},
        {"client_width", 0x015C26F0},
        {"first_child", 0x015C2750},
        {"id", 0x015C27B0},
        {"inner_rml", 0x015C2810},
        {"last_child", 0x015C28C0},
        {"next_sibling", 0x015C2920},
        {"offset_height", 0x015C2980},
        {"offset_left", 0x015C29E0},
        {"offset_parent", 0x015C2A40},
        {"offset_top", 0x015C2AA0},
        {"offset_width", 0x015C2B00},
        {"owner_document", 0x015C2B60},
        {"parent_node", 0x015C2BC0},
        {"previous_sibling", 0x015C2C20},
        {"scroll_height", 0x015C2C80},
        {"scroll_left", 0x015C2CE0},
        {"scroll_top", 0x015C2D40},
        {"scroll_width", 0x015C2DA0},
        {"style", 0x015C2E00},
        {"tag_name", 0x015C2E70},
    };
    constexpr Binding kBind25[] = {
        {"class_name", 0x015C2ED0},
        {"id", 0x015C2FC0},
        {"inner_rml", 0x015C30B0},
        {"scroll_left", 0x015C31B0},
        {"scroll_top", 0x015C3220},
    };
    constexpr Binding kBind26[] = {
        {"current_element", 0x015C51D0},
        {"type", 0x015C5230},
        {"target_element", 0x015C5410},
        {"parameters", 0x015C5470},
    };
    constexpr Binding kBind27[] = {
        {"DotProduct", 0x015C6200},
        {"Normalise", 0x015C6270},
        {"Rotate", 0x015C6320},
    };
    constexpr Binding kBind28[] = {
        {"x", 0x015C63F0},
        {"y", 0x015C6440},
        {"magnitude", 0x015C6490},
    };
    constexpr Binding kBind29[] = {
        {"x", 0x015C6CF0},
        {"y", 0x015C6D40},
        {"magnitude", 0x015C6D90},
    };
    constexpr Binding kBind30[] = {
        {"disabled", 0x015C78C0},
        {"name", 0x015C7910},
        {"value", 0x015C79C0},
    };
    constexpr Binding kBind31[] = {
        {"disabled", 0x015C7A80},
        {"name", 0x015C7AF0},
        {"value", 0x015C7BE0},
    };
    constexpr Binding kBind32[] = {
        {"Select", 0x015C8030},
        {"SetSelection", 0x015C8050},
        {"GetSelection", 0x015C80A0},
    };
    constexpr Binding kBind33[] = {
        {"checked", 0x015C8180},
        {"maxlength", 0x015C8270},
        {"size", 0x015C8370},
        {"max", 0x015C8460},
        {"min", 0x015C8550},
        {"step", 0x015C8640},
    };
    constexpr Binding kBind34[] = {
        {"checked", 0x015C8730},
        {"maxlength", 0x015C8890},
        {"size", 0x015C8990},
        {"max", 0x015C8A80},
        {"min", 0x015C8B80},
        {"step", 0x015C8C80},
    };
    constexpr Binding kBind35[] = {
        {"Add", 0x015C9260},
        {"Remove", 0x015C9410},
        {"RemoveAll", 0x015C9560},
    };
    constexpr Binding kBind36[] = {
        {"Select", 0x015C9AC0},
        {"SetSelection", 0x015C9AE0},
        {"GetSelection", 0x015C9B30},
    };
    constexpr Binding kBind37[] = {
        {"cols", 0x015C9C10},
        {"maxlength", 0x015C9C60},
        {"rows", 0x015C9CB0},
        {"wordwrap", 0x015C9D00},
    };
    constexpr Binding kBind38[] = {
        {"cols", 0x015C9D50},
        {"maxlength", 0x015C9DB0},
        {"rows", 0x015C9E10},
        {"wordwrap", 0x015C9E70},
    };
    constexpr BindingTable kBindingTables[] = {
        {0x01FADC80, kBind0, 10},
        {0x01FAE920, kBind1, 23},
        {0x01FAED50, kBind2, 8},
        {0x01FAEF50, kBind3, 7},
        {0x01FAF0E0, kBind4, 11},
        {0x01FAF1A0, kBind5, 7},
        {0x01FAF230, kBind6, 3},
        {0x01FAF5A0, kBind7, 11},
        {0x01FAF830, kBind8, 3},
        {0x01FAF870, kBind9, 5},
        {0x01FAF8D0, kBind10, 7},
        {0x01FAFF20, kBind11, 5},
        {0x01FB0040, kBind12, 21},
        {0x01FB02C0, kBind13, 17},
        {0x024749E0, kBind14, 3},
        {0x02474A20, kBind15, 3},
        {0x02474A60, kBind16, 5},
        {0x02474AC0, kBind17, 5},
        {0x02474B20, kBind18, 5},
        {0x02474B80, kBind19, 5},
        {0x02474BE0, kBind20, 17},
        {0x02474D00, kBind21, 7},
        {0x02474DD0, kBind22, 7},
        {0x02474EA0, kBind23, 22},
        {0x02475010, kBind24, 26},
        {0x024751C0, kBind25, 5},
        {0x024752F0, kBind26, 4},
        {0x02475340, kBind27, 3},
        {0x02475380, kBind28, 3},
        {0x024753F0, kBind29, 3},
        {0x02475480, kBind30, 3},
        {0x024754C0, kBind31, 3},
        {0x02475500, kBind32, 3},
        {0x02475540, kBind33, 6},
        {0x024755B0, kBind34, 6},
        {0x02475620, kBind35, 3},
        {0x024756B0, kBind36, 3},
        {0x024756F0, kBind37, 4},
        {0x02475740, kBind38, 4},
    };
}
