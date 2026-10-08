// Growtopia x64 offsets - generated 2026-10-08 12:26:10Z
// image base 0x140000000  build hash 98acf57c002426ec
#pragma once
namespace gt {
    constexpr uintptr_t kSendPacket = 0x00C3C8A0; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    constexpr uintptr_t kSendPacketRaw = 0x00C3C9C0; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    constexpr uintptr_t kProcessTankUpdatePacket = 0x00B374D0; // incoming PACKET_* dispatcher
    constexpr uintptr_t kVariantListSerializeFromMem = 0x01276810; // VariantList::SerializeFromMem
    constexpr uintptr_t kPacketTypeDispatcher = 0x00A092C0; // 
    constexpr uintptr_t kPacketLengthValidator = 0x00C39930; // 
    constexpr uintptr_t kTrackPacketSender = 0x00B6C8F0; // 
    constexpr uintptr_t kENetHostConnectSetup = 0x00A08EA0; // 
    constexpr uintptr_t kPlayerItems_AddItem = 0x00C41800; // 
    constexpr uintptr_t kPlayerItems_HaveRoomForItem = 0x00C42990; // 
    constexpr uintptr_t kPlayerItems_RemoveItem = 0x00C44110; // 
    constexpr uintptr_t kInventoryIllegalItemPurge = 0x00C44260; // 
    constexpr uintptr_t kItemsDatLoader = 0x00C58720; // 
    constexpr uintptr_t kItemValidator = 0x00C581C0; // 
    constexpr uintptr_t kItemHashCheck = 0x00C29E50; // 
    constexpr uintptr_t kItemSurfaceRender = 0x00A3A770; // 
    constexpr uintptr_t kChooseVisual = 0x00C78B80; // 
    constexpr uintptr_t kWorld_Load = 0x01435AC0; // 
    constexpr uintptr_t kWorldVersionCheck = 0x00B374D0; // 
    constexpr uintptr_t kTileExtraParser = 0x00C6A050; // 
    constexpr uintptr_t kWhiteDoorLookup = 0x014352C0; // 
    constexpr uintptr_t kTilesheetLoader = 0x00A299B0; // 
    constexpr uintptr_t kBgItemMapValidator = 0x00C58F60; // 
    constexpr uintptr_t kNetAvatar_OnAvatarBePaintBalled = 0x00AE23D0; // 
    constexpr uintptr_t kPunchHackDetector = 0x00AE6ED0; // 
    constexpr uintptr_t kPunchNoTileHandler = 0x009A7730; // 
    constexpr uintptr_t kHarvestInteraction = 0x00A11FB0; // 
    constexpr uintptr_t kCameraManager = 0x00A25DE0; // 
    constexpr uintptr_t kDialogBuilder = 0x00CF31F0; // 
    constexpr uintptr_t kBannerDialogBuilder = 0x00D6E700; // 
    constexpr uintptr_t kEnableAllButtonsEntity = 0x011CFBE0; // 
    constexpr uintptr_t kController_PushController = 0x00D83330; // 
    constexpr uintptr_t kController_PopController = 0x00D83110; // 
    constexpr uintptr_t kController_PushChildController = 0x0107B820; // 
    constexpr uintptr_t kController_OnActivate = 0x00DBE760; // 
    constexpr uintptr_t kController_Deactivate = 0x00DBE3A0; // 
    constexpr uintptr_t kController_Release = 0x0097CDD0; // 
    constexpr uintptr_t kUIController_OnActivate = 0x010D0820; // 
    constexpr uintptr_t kUIController_OnDeactivate = 0x010D0E10; // 
    constexpr uintptr_t kUIController_RemoveScreenView = 0x010D1090; // 
    constexpr uintptr_t kParticleEmitter_GetPaintballColor = 0x00E0D8E0; // 
    constexpr uintptr_t kRTFont_GetColorFromString = 0x00D5BFD0; // 
    constexpr uintptr_t kResourceManager_GetSurfaceResource = 0x0123D8C0; // 
    constexpr uintptr_t kVideoModeManager_SetVideoMode = 0x00DADBC0; // 
    constexpr uintptr_t kVideoModeManager_SetFullscreen = 0x00DAD4D0; // 
    constexpr uintptr_t kVideoModeManager_AddVideoMode = 0x00DAAE00; // self-naming anchor: AddVideoMode logs its own name once; a 5
    constexpr uintptr_t kVideoModeManager_GetCustomVideoModes = 0x00DAB3C0; // 
    constexpr uintptr_t kVideoModeManager_OnWMSize = 0x00DAD5A0; // 
    constexpr uintptr_t kIAPManager_LoadCurrenciesConfig = 0x011952D0; // 
    constexpr uintptr_t kIAPManager_ctor = 0x011A15F0; // 
    constexpr uintptr_t kApp_Kill = 0x0097BD10; // 
    constexpr uintptr_t kStoreBuyPacketPath = 0x00D6A4E0; // 
    constexpr uintptr_t kTileCoordinateHandler = 0x009A5CE0; // 
    constexpr uintptr_t kLogDisplayEntityBuilder = 0x011D37D0; // NOT LogToConsole: the sole owner of this string also refs Ge
    constexpr uintptr_t kItemRendererXmlLoader = 0x00FC22D0; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    constexpr uintptr_t kBattlePetConfigLoader = 0x00BC4380; // 
    constexpr uintptr_t kOwlsOfAthenaPets_RenderPet = 0x0076E0B0; // 
    constexpr uintptr_t kFlying2Pets_RenderPet = 0x008E3FB0; // 
    constexpr uintptr_t kScepter_RenderPet = 0x006966E0; // 
    constexpr uintptr_t kOwlsOfAthenaPets_OnRespawned = 0x007591A0; // 
    constexpr uintptr_t kFlying2Pets_OnRespawned = 0x008CEBC0; // 
    constexpr uintptr_t kFactionIconLoader = 0x00ADCA10; // 
    constexpr uintptr_t kTextOverlayActionHandler = 0x00B33E20; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    constexpr uintptr_t kInventoryTabUI = 0x0109EF50; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    constexpr uintptr_t kCaptchaInputDialog = 0x00D02640; // 
    constexpr uintptr_t kWorldTileMap = 0x00C80420; // the tile-map container: dimensions + tile count
    constexpr uintptr_t kTileLookupGuard = 0x009BD0F0; // tile lookup / punch target resolution
    constexpr uintptr_t kTilesheetPageLoader = 0x00D049F0; // tile sheet texture loader
    constexpr uintptr_t kWorldValidation = 0x010E72C0; // world validation pass
    constexpr uintptr_t kWeaponDamageTierText = 0x00C06CC0; // weapon damage tier description
    constexpr uintptr_t kGrowtorialButton = 0x00CB85B0; // 
    constexpr uintptr_t kWorldLockText = 0x00AEE240; // 
    constexpr uintptr_t kSeedTreeItemPath = 0x00CE3030; // 
    constexpr uintptr_t kTileDefinitionsLoader = 0x00C25320; // 
    constexpr uintptr_t kWeatherEffectText = 0x00BFE410; // 
    constexpr uintptr_t kItemEffectVariantDispatcher = 0x00AF6E50; // second On* dispatcher (43 handlers): item/cosmetic effect va
    constexpr uintptr_t kOnDeathEquipTagHandler = 0x00FC8C40; // also OnEquipTag; death + equip-tag handling
    constexpr uintptr_t kOnDisconnectedHandler = 0x00B2CB90; // 
    constexpr uintptr_t kOnErrorFinishHandler = 0x00A684C0; // also OnFinish
    constexpr uintptr_t kOnOverMoveHandler = 0x011AC310; // also OnOverEnd; hover/drag move
    constexpr uintptr_t kOnEventHandler = 0x01059DC0; // 
    constexpr uintptr_t kOnRenderHandler = 0x0121CA20; // 
    constexpr uintptr_t kOnFakeScrollToEntity = 0x0120EA50; // 
    constexpr uintptr_t kOnButtonSelectedHandler = 0x00D55A90; // 
    constexpr uintptr_t kTradeHandler = 0x00D7DA90; // 
    constexpr uintptr_t kTradeOtherPlayerGuard = 0x00D7C350; // 
    constexpr uintptr_t kStateMachineTransitions = 0x01022590; // item-renderer state-machine transitions
    constexpr uintptr_t kAnimCurveKeyFrameParser = 0x00FFE4F0; // animation curve/keyframe parser
    constexpr uintptr_t kSpriteAnimStateParser = 0x01005490; // sprite animation: playOnState/isLoop
    constexpr uintptr_t kAnimTimeParser = 0x00FFFFE0; // 
    constexpr uintptr_t kParticleEmitterParser = 0x00E0D8E0; // particle emitter definitions
    constexpr uintptr_t kRendererConditionParser = 0x010249D0; // state-machine <Condition> evaluation
    constexpr uintptr_t kSpriteRenderParser = 0x008D4780; // 
    constexpr uintptr_t kLoginPacketBuilder = 0x00DC0AA0; // 
    constexpr uintptr_t kTileActionBuilder = 0x00AE9340; // 
    constexpr uintptr_t kDialogButtonBuilder = 0x010DFC10; // 
    constexpr uintptr_t kNetAvatarSpawnHandler = 0x00B32310; // 
    constexpr uintptr_t kGameUpdatePacketSerializer = 0x00A0B3F0; // 
    constexpr uintptr_t kNetAvatarNetIDEmitter = 0x00B2F3A0; // 
    constexpr uintptr_t kIAPPurchaseValidation = 0x00D18AC0; // 
    constexpr uintptr_t kOnVariantDispatcher = 0x00B26520; // 
    constexpr uintptr_t kPunchAction = 0x00DDBDF0; // 
    constexpr uintptr_t kGetApp = 0x00978910; // leaf without unwind data; not a .pdata entry
    constexpr uintptr_t kGetClient = 0x00A08E80; // kAppClientOffset = 0xAD0 (derived)
    constexpr uintptr_t kGetPacketProcessor = 0x00B210D0; // kAppPacketProcessorOffset = 0x1218 (derived)
    constexpr uintptr_t kGetLocalAvatar = 0x00B21430; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)

    struct Binding { const char* name; unsigned int rva; };
    struct BindingTable { unsigned int rva; const Binding* rows; int count; };
    constexpr Binding kBind0[] = {
        {"_G", 0x015BCED0},
        {"package", 0x015C8290},
        {"coroutine", 0x015BD540},
        {"table", 0x015BE4B0},
        {"io", 0x015BFCC0},
        {"os", 0x015C08B0},
        {"string", 0x015C4830},
        {"math", 0x015C5FF0},
        {"utf8", 0x015C5190},
        {"debug", 0x015C7430},
    };
    constexpr Binding kBind1[] = {
        {"assert", 0x015BBE60},
        {"collectgarbage", 0x015BC810},
        {"dofile", 0x015BBDD0},
        {"error", 0x015BC520},
        {"getmetatable", 0x015BC5A0},
        {"ipairs", 0x015BCB90},
        {"loadfile", 0x015BCBE0},
        {"load", 0x015BBCD0},
        {"next", 0x015BCA90},
        {"pairs", 0x015BCAF0},
        {"pcall", 0x015BC000},
        {"print", 0x015BC190},
        {"warn", 0x015BC280},
        {"rawequal", 0x015BC6B0},
        {"rawlen", 0x015BC700},
        {"rawget", 0x015BC760},
        {"rawset", 0x015BC7B0},
        {"select", 0x015BBF40},
        {"setmetatable", 0x015BC600},
        {"tonumber", 0x015BC330},
        {"tostring", 0x015BC160},
        {"type", 0x015BCA30},
        {"xpcall", 0x015BC0A0},
    };
    constexpr Binding kBind2[] = {
        {"create", 0x015BD000},
        {"resume", 0x015BCF50},
        {"running", 0x015BD1E0},
        {"status", 0x015BD100},
        {"wrap", 0x015BD060},
        {"yield", 0x015BD0D0},
        {"isyieldable", 0x015BD170},
        {"close", 0x015BD210},
    };
    constexpr Binding kBind3[] = {
        {"concat", 0x015BDAF0},
        {"insert", 0x015BD590},
        {"pack", 0x015BDD20},
        {"unpack", 0x015BDDD0},
        {"remove", 0x015BD720},
        {"move", 0x015BD8A0},
        {"sort", 0x015BDEC0},
    };
    constexpr Binding kBind4[] = {
        {"close", 0x015BED50},
        {"flush", 0x015BEB00},
        {"input", 0x015BE500},
        {"lines", 0x015BE670},
        {"open", 0x015BEE40},
        {"output", 0x015BE590},
        {"popen", 0x015BEF80},
        {"read", 0x015BE790},
        {"tmpfile", 0x015BF060},
        {"type", 0x015BEC10},
        {"write", 0x015BE860},
    };
    constexpr Binding kBind5[] = {
        {"read", 0x015BE800},
        {"write", 0x015BE8D0},
        {"lines", 0x015BE620},
        {"flush", 0x015BEB90},
        {"seek", 0x015BE940},
        {"close", 0x015BECE0},
        {"setvbuf", 0x015BEA30},
    };
    constexpr Binding kBind6[] = {
        {"__gc", 0x015BEDE0},
        {"__close", 0x015BEDE0},
        {"__tostring", 0x015BEC80},
    };
    constexpr Binding kBind7[] = {
        {"clock", 0x015C0620},
        {"date", 0x015BFED0},
        {"difftime", 0x015C02E0},
        {"execute", 0x015C0420},
        {"exit", 0x015C03A0},
        {"getenv", 0x015C05E0},
        {"remove", 0x015C0490},
        {"rename", 0x015C04F0},
        {"setlocale", 0x015C0330},
        {"time", 0x015C0150},
        {"tmpname", 0x015C0570},
    };
    constexpr Binding kBind8[] = {
        {"byte", 0x015C0DD0},
        {"char", 0x015C0EF0},
        {"dump", 0x015C0FD0},
    };
    constexpr Binding kBind9[] = {
        {"format", 0x015C1500},
        {"gmatch", 0x015C11A0},
        {"gsub", 0x015C12B0},
        {"len", 0x015C0900},
        {"lower", 0x015C0AC0},
    };
    constexpr Binding kBind10[] = {
        {"rep", 0x015C0C40},
        {"reverse", 0x015C0A20},
        {"sub", 0x015C0930},
        {"upper", 0x015C0B80},
        {"pack", 0x015C1D40},
        {"packsize", 0x015C2410},
        {"unpack", 0x015C25B0},
    };
    constexpr Binding kBind11[] = {
        {"offset", 0x015C4DA0},
        {"codepoint", 0x015C4A70},
        {"char", 0x015C4C80},
        {"len", 0x015C4900},
        {"codes", 0x015C4F20},
    };
    constexpr Binding kBind12[] = {
        {"abs", 0x015C5210},
        {"acos", 0x015C5340},
        {"asin", 0x015C5310},
        {"atan", 0x015C5370},
        {"ceil", 0x015C54B0},
        {"cos", 0x015C52B0},
        {"deg", 0x015C5880},
        {"exp", 0x015C5850},
        {"tointeger", 0x015C53D0},
        {"floor", 0x015C5430},
        {"fmod", 0x015C5530},
        {"ult", 0x015C5740},
        {"log", 0x015C5790},
        {"max", 0x015C59A0},
        {"min", 0x015C5900},
        {"modf", 0x015C5630},
        {"rad", 0x015C58C0},
        {"sin", 0x015C5280},
        {"sqrt", 0x015C5700},
        {"tan", 0x015C52E0},
        {"type", 0x015C5A40},
    };
    constexpr Binding kBind13[] = {
        {"debug", 0x015C7090},
        {"getuservalue", 0x015C61F0},
        {"gethook", 0x015C6F10},
        {"getinfo", 0x015C62F0},
        {"getlocal", 0x015C6780},
        {"getregistry", 0x015C6130},
        {"getmetatable", 0x015C6150},
        {"getupvalue", 0x015C6A70},
        {"upvaluejoin", 0x015C6C00},
        {"upvalueid", 0x015C6B80},
        {"setuservalue", 0x015C6270},
        {"sethook", 0x015C6D20},
        {"setlocal", 0x015C6900},
        {"setmetatable", 0x015C6190},
        {"setupvalue", 0x015C6AF0},
        {"traceback", 0x015C7280},
        {"setcstacklimit", 0x015C7350},
    };
    constexpr Binding kBind14[] = {
        {"CreateContext", 0x01590650},
        {"LoadFontFace", 0x01590770},
        {"RegisterTag", 0x015908B0},
    };
    constexpr Binding kBind15[] = {
        {"contexts", 0x015909B0},
        {"key_identifier", 0x015909F0},
        {"key_modifier", 0x01590A30},
    };
    constexpr Binding kBind16[] = {
        {"red", 0x01592740},
        {"green", 0x01592790},
        {"blue", 0x015927E0},
        {"alpha", 0x01592830},
        {"rgba", 0x01592880},
    };
    constexpr Binding kBind17[] = {
        {"red", 0x01592900},
        {"green", 0x01592960},
        {"blue", 0x015929C0},
        {"alpha", 0x01592A20},
        {"rgba", 0x01592A80},
    };
    constexpr Binding kBind18[] = {
        {"red", 0x01593150},
        {"green", 0x015931A0},
        {"blue", 0x015931F0},
        {"alpha", 0x01593240},
        {"rgba", 0x01593290},
    };
    constexpr Binding kBind19[] = {
        {"red", 0x01593320},
        {"green", 0x01593390},
        {"blue", 0x01593400},
        {"alpha", 0x01593470},
        {"rgba", 0x015934E0},
    };
    constexpr Binding kBind20[] = {
        {"AddEventListener", 0x01593E30},
        {"CreateDocument", 0x01594340},
        {"LoadDocument", 0x01594450},
        {"Render", 0x01594540},
        {"UnloadAllDocuments", 0x01594570},
        {"UnloadDocument", 0x01594590},
        {"Update", 0x015945D0},
        {"OpenDataModel", 0x015939E0},
        {"ProcessMouseMove", 0x01593A20},
        {"ProcessMouseButtonDown", 0x01593AA0},
        {"ProcessMouseButtonUp", 0x01593B00},
        {"ProcessMouseWheel", 0x01593B60},
        {"ProcessMouseLeave", 0x01593BD0},
        {"IsMouseInteracting", 0x01593C00},
        {"ProcessKeyDown", 0x01593C30},
        {"ProcessKeyUp", 0x01593C90},
        {"ProcessTextInput", 0x01593CF0},
    };
    constexpr Binding kBind21[] = {
        {"dimensions", 0x01594600},
        {"documents", 0x01594670},
        {"dp_ratio", 0x015946E0},
        {"focus_element", 0x01594720},
        {"hover_element", 0x01594780},
        {"name", 0x015947E0},
        {"root_element", 0x01594840},
    };
    constexpr Binding kBind22[] = {
        {"PullToFront", 0x01595510},
        {"PushToBack", 0x01595530},
        {"Show", 0x01595550},
        {"Hide", 0x015955D0},
        {"Close", 0x015955F0},
        {"CreateElement", 0x01595610},
        {"CreateTextNode", 0x01595780},
    };
    constexpr Binding kBind23[] = {
        {"AddEventListener", 0x01596160},
        {"AppendChild", 0x015963C0},
        {"Blur", 0x015964C0},
        {"Click", 0x015964E0},
        {"DispatchEvent", 0x01596500},
        {"Focus", 0x01596A50},
        {"GetAttribute", 0x01596A70},
        {"GetElementById", 0x01596B60},
        {"GetElementsByTagName", 0x01596C50},
        {"QuerySelector", 0x01596F60},
        {"QuerySelectorAll", 0x01597050},
        {"Matches", 0x01597360},
        {"HasAttribute", 0x01597430},
        {"HasChildNodes", 0x01597500},
        {"InsertBefore", 0x01597530},
        {"IsClassSet", 0x01597650},
        {"RemoveAttribute", 0x01597720},
        {"RemoveChild", 0x015977E0},
        {"ReplaceChild", 0x01597850},
        {"ScrollIntoView", 0x01597980},
        {"SetAttribute", 0x015979B0},
        {"SetClass", 0x01597B20},
    };
    constexpr Binding kBind24[] = {
        {"attributes", 0x01597C10},
        {"child_nodes", 0x01597C80},
        {"class_name", 0x01597CF0},
        {"client_left", 0x01597DB0},
        {"client_height", 0x01597E10},
        {"client_top", 0x01597E70},
        {"client_width", 0x01597ED0},
        {"first_child", 0x01597F30},
        {"id", 0x01597F90},
        {"inner_rml", 0x01597FF0},
        {"last_child", 0x015980A0},
        {"next_sibling", 0x01598100},
        {"offset_height", 0x01598160},
        {"offset_left", 0x015981C0},
        {"offset_parent", 0x01598220},
        {"offset_top", 0x01598280},
        {"offset_width", 0x015982E0},
        {"owner_document", 0x01598340},
        {"parent_node", 0x015983A0},
        {"previous_sibling", 0x01598400},
        {"scroll_height", 0x01598460},
        {"scroll_left", 0x015984C0},
        {"scroll_top", 0x01598520},
        {"scroll_width", 0x01598580},
        {"style", 0x015985E0},
        {"tag_name", 0x01598650},
    };
    constexpr Binding kBind25[] = {
        {"class_name", 0x015986B0},
        {"id", 0x015987A0},
        {"inner_rml", 0x01598890},
        {"scroll_left", 0x01598990},
        {"scroll_top", 0x01598A00},
    };
    constexpr Binding kBind26[] = {
        {"current_element", 0x0159A9B0},
        {"type", 0x0159AA10},
        {"target_element", 0x0159ABF0},
        {"parameters", 0x0159AC50},
    };
    constexpr Binding kBind27[] = {
        {"DotProduct", 0x0159B9E0},
        {"Normalise", 0x0159BA50},
        {"Rotate", 0x0159BB00},
    };
    constexpr Binding kBind28[] = {
        {"x", 0x0159BBD0},
        {"y", 0x0159BC20},
        {"magnitude", 0x0159BC70},
    };
    constexpr Binding kBind29[] = {
        {"x", 0x0159C4D0},
        {"y", 0x0159C520},
        {"magnitude", 0x0159C570},
    };
    constexpr Binding kBind30[] = {
        {"disabled", 0x0159D0A0},
        {"name", 0x0159D0F0},
        {"value", 0x0159D1A0},
    };
    constexpr Binding kBind31[] = {
        {"disabled", 0x0159D260},
        {"name", 0x0159D2D0},
        {"value", 0x0159D3C0},
    };
    constexpr Binding kBind32[] = {
        {"Select", 0x0159D810},
        {"SetSelection", 0x0159D830},
        {"GetSelection", 0x0159D880},
    };
    constexpr Binding kBind33[] = {
        {"checked", 0x0159D960},
        {"maxlength", 0x0159DA50},
        {"size", 0x0159DB50},
        {"max", 0x0159DC40},
        {"min", 0x0159DD30},
        {"step", 0x0159DE20},
    };
    constexpr Binding kBind34[] = {
        {"checked", 0x0159DF10},
        {"maxlength", 0x0159E070},
        {"size", 0x0159E170},
        {"max", 0x0159E260},
        {"min", 0x0159E360},
        {"step", 0x0159E460},
    };
    constexpr Binding kBind35[] = {
        {"Add", 0x0159EA40},
        {"Remove", 0x0159EBF0},
        {"RemoveAll", 0x0159ED40},
    };
    constexpr Binding kBind36[] = {
        {"Select", 0x0159F2A0},
        {"SetSelection", 0x0159F2C0},
        {"GetSelection", 0x0159F310},
    };
    constexpr Binding kBind37[] = {
        {"cols", 0x0159F3F0},
        {"maxlength", 0x0159F440},
        {"rows", 0x0159F490},
        {"wordwrap", 0x0159F4E0},
    };
    constexpr Binding kBind38[] = {
        {"cols", 0x0159F530},
        {"maxlength", 0x0159F590},
        {"rows", 0x0159F5F0},
        {"wordwrap", 0x0159F650},
    };
    constexpr BindingTable kBindingTables[] = {
        {0x01D9D680, kBind0, 10},
        {0x01D9E320, kBind1, 23},
        {0x01D9E750, kBind2, 8},
        {0x01D9E950, kBind3, 7},
        {0x01D9EAE0, kBind4, 11},
        {0x01D9EBA0, kBind5, 7},
        {0x01D9EC30, kBind6, 3},
        {0x01D9EFA0, kBind7, 11},
        {0x01D9F230, kBind8, 3},
        {0x01D9F270, kBind9, 5},
        {0x01D9F2D0, kBind10, 7},
        {0x01D9F920, kBind11, 5},
        {0x01D9FA40, kBind12, 21},
        {0x01D9FCC0, kBind13, 17},
        {0x0221A860, kBind14, 3},
        {0x0221A8A0, kBind15, 3},
        {0x0221A8E0, kBind16, 5},
        {0x0221A940, kBind17, 5},
        {0x0221A9A0, kBind18, 5},
        {0x0221AA00, kBind19, 5},
        {0x0221AA60, kBind20, 17},
        {0x0221AB80, kBind21, 7},
        {0x0221AC50, kBind22, 7},
        {0x0221AD20, kBind23, 22},
        {0x0221AE90, kBind24, 26},
        {0x0221B040, kBind25, 5},
        {0x0221B170, kBind26, 4},
        {0x0221B1C0, kBind27, 3},
        {0x0221B200, kBind28, 3},
        {0x0221B270, kBind29, 3},
        {0x0221B300, kBind30, 3},
        {0x0221B340, kBind31, 3},
        {0x0221B380, kBind32, 3},
        {0x0221B3C0, kBind33, 6},
        {0x0221B430, kBind34, 6},
        {0x0221B4A0, kBind35, 3},
        {0x0221B530, kBind36, 3},
        {0x0221B570, kBind37, 4},
        {0x0221B5C0, kBind38, 4},
    };
}
