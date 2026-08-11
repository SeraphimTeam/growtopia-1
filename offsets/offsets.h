// Growtopia x64 offsets - generated 2026-08-11 03:18:03Z
// image base 0x140000000  build hash 689ca0ea3d31fd28
#pragma once
namespace gt {
    constexpr uintptr_t kSendPacket = 0x00CBD020; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    constexpr uintptr_t kSendPacketRaw = 0x00CBD140; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    constexpr uintptr_t kProcessTankUpdatePacket = 0x00BC9480; // incoming PACKET_* dispatcher
    constexpr uintptr_t kVariantListSerializeFromMem = 0x012FC360; // VariantList::SerializeFromMem
    constexpr uintptr_t kPacketTypeDispatcher = 0x00A91A50; // 
    constexpr uintptr_t kPacketLengthValidator = 0x00CBA0B0; // 
    constexpr uintptr_t kTrackPacketSender = 0x00BFE7E0; // 
    constexpr uintptr_t kENetHostConnectSetup = 0x00A91630; // 
    constexpr uintptr_t kPlayerItems_AddItem = 0x00CC1F20; // 
    constexpr uintptr_t kPlayerItems_HaveRoomForItem = 0x00CC3040; // 
    constexpr uintptr_t kPlayerItems_RemoveItem = 0x00CC47C0; // 
    constexpr uintptr_t kInventoryIllegalItemPurge = 0x00CC4910; // 
    constexpr uintptr_t kItemsDatLoader = 0x00CD8C20; // 
    constexpr uintptr_t kItemValidator = 0x00CD86C0; // 
    constexpr uintptr_t kItemHashCheck = 0x00CAA660; // 
    constexpr uintptr_t kItemSurfaceRender = 0x00AC3110; // 
    constexpr uintptr_t kChooseVisual = 0x00CF3E30; // 
    constexpr uintptr_t kWorld_Load = 0x014CEA80; // 
    constexpr uintptr_t kWorldVersionCheck = 0x00BC9480; // 
    constexpr uintptr_t kTileExtraParser = 0x00CEA570; // 
    constexpr uintptr_t kWhiteDoorLookup = 0x014CE2A0; // 
    constexpr uintptr_t kTilesheetLoader = 0x00AB1E20; // 
    constexpr uintptr_t kBgItemMapValidator = 0x00CD9460; // 
    constexpr uintptr_t kNetAvatar_OnAvatarBePaintBalled = 0x00B754F0; // 
    constexpr uintptr_t kPunchHackDetector = 0x00B79FF0; // 
    constexpr uintptr_t kPunchNoTileHandler = 0x00A2FFE0; // 
    constexpr uintptr_t kHarvestInteraction = 0x00A9A760; // 
    constexpr uintptr_t kCameraManager = 0x00AAE270; // 
    constexpr uintptr_t kDialogBuilder = 0x00D6F150; // 
    constexpr uintptr_t kBannerDialogBuilder = 0x00DEAC00; // 
    constexpr uintptr_t kEnableAllButtonsEntity = 0x01252290; // 
    constexpr uintptr_t kController_PushController = 0x00E006D0; // 
    constexpr uintptr_t kController_PopController = 0x00E004B0; // 
    constexpr uintptr_t kController_PushChildController = 0x0110CEA0; // 
    constexpr uintptr_t kController_OnActivate = 0x00E39C70; // 
    constexpr uintptr_t kController_Deactivate = 0x00E398B0; // 
    constexpr uintptr_t kController_Release = 0x00A04880; // 
    constexpr uintptr_t kUIController_OnActivate = 0x01161320; // 
    constexpr uintptr_t kUIController_OnDeactivate = 0x01161910; // 
    constexpr uintptr_t kUIController_RemoveScreenView = 0x01161B90; // 
    constexpr uintptr_t kParticleEmitter_GetPaintballColor = 0x00E88CF0; // 
    constexpr uintptr_t kRTFont_GetColorFromString = 0x00DD7DA0; // 
    constexpr uintptr_t kResourceManager_GetSurfaceResource = 0x012C3A30; // 
    constexpr uintptr_t kVideoModeManager_SetVideoMode = 0x00E29F50; // 
    constexpr uintptr_t kVideoModeManager_SetFullscreen = 0x00E29860; // 
    constexpr uintptr_t kVideoModeManager_AddVideoMode = 0x00E27190; // self-naming anchor: AddVideoMode logs its own name once; a 5
    constexpr uintptr_t kVideoModeManager_GetCustomVideoModes = 0x00E27750; // 
    constexpr uintptr_t kVideoModeManager_OnWMSize = 0x00E29930; // 
    constexpr uintptr_t kIAPManager_LoadCurrenciesConfig = 0x01217B60; // 
    constexpr uintptr_t kIAPManager_ctor = 0x01223C90; // 
    constexpr uintptr_t kApp_Kill = 0x00A03830; // 
    constexpr uintptr_t kStoreBuyPacketPath = 0x00DE6E70; // 
    constexpr uintptr_t kTileCoordinateHandler = 0x00A2E590; // 
    constexpr uintptr_t kLogDisplayEntityBuilder = 0x01255E80; // NOT LogToConsole: the sole owner of this string also refs Ge
    constexpr uintptr_t kItemRendererXmlLoader = 0x01048E40; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    constexpr uintptr_t kBattlePetConfigLoader = 0x00C4D280; // 
    constexpr uintptr_t kOwlsOfAthenaPets_RenderPet = 0x007F52A0; // 
    constexpr uintptr_t kFlying2Pets_RenderPet = 0x0096B170; // 
    constexpr uintptr_t kScepter_RenderPet = 0x0071E060; // 
    constexpr uintptr_t kOwlsOfAthenaPets_OnRespawned = 0x007E03B0; // 
    constexpr uintptr_t kFlying2Pets_OnRespawned = 0x00955D30; // 
    constexpr uintptr_t kFactionIconLoader = 0x00B6FB50; // 
    constexpr uintptr_t kPlayerProgression = 0x0171B210; // 
    constexpr uintptr_t kTextOverlayActionHandler = 0x00BC5E10; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    constexpr uintptr_t kInventoryTabUI = 0x01130030; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    constexpr uintptr_t kCaptchaInputDialog = 0x00D7E5A0; // 
    constexpr uintptr_t kAuthClient_Login = 0x01730540; // 
    constexpr uintptr_t kWorldTileMap = 0x00CFB6B0; // the tile-map container: dimensions + tile count
    constexpr uintptr_t kTileLookupGuard = 0x00A459A0; // tile lookup / punch target resolution
    constexpr uintptr_t kTilesheetPageLoader = 0x00D80950; // tile sheet texture loader
    constexpr uintptr_t kWorldValidation = 0x01177310; // world validation pass
    constexpr uintptr_t kWeaponDamageTierText = 0x00C87A00; // weapon damage tier description
    constexpr uintptr_t kGrowtorialButton = 0x00D33B10; // 
    constexpr uintptr_t kWorldLockText = 0x00B81200; // 
    constexpr uintptr_t kSeedTreeItemPath = 0x00D5EFC0; // 
    constexpr uintptr_t kTileDefinitionsLoader = 0x00CA5BD0; // 
    constexpr uintptr_t kWeatherEffectText = 0x00C7F150; // 
    constexpr uintptr_t kItemEffectVariantDispatcher = 0x00B89DF0; // second On* dispatcher (43 handlers): item/cosmetic effect va
    constexpr uintptr_t kOnDeathEquipTagHandler = 0x0104F1C0; // also OnEquipTag; death + equip-tag handling
    constexpr uintptr_t kOnDisconnectedHandler = 0x00BBEF80; // 
    constexpr uintptr_t kOnErrorFinishHandler = 0x00AF0E70; // also OnFinish
    constexpr uintptr_t kOnOverMoveHandler = 0x0122E9C0; // also OnOverEnd; hover/drag move
    constexpr uintptr_t kOnEventHandler = 0x010E78D0; // 
    constexpr uintptr_t kOnRenderHandler = 0x012A2B90; // 
    constexpr uintptr_t kOnFakeScrollToEntity = 0x01294BC0; // 
    constexpr uintptr_t kOnDeleteHandler = 0x017865C0; // 
    constexpr uintptr_t kOnButtonSelectedHandler = 0x00D4E9C0; // 
    constexpr uintptr_t kTradeHandler = 0x00DFAE30; // 
    constexpr uintptr_t kTradeOtherPlayerGuard = 0x00DF96F0; // 
    constexpr uintptr_t kStateMachineTransitions = 0x010B1990; // item-renderer state-machine transitions
    constexpr uintptr_t kAnimCurveKeyFrameParser = 0x01084AA0; // animation curve/keyframe parser
    constexpr uintptr_t kSpriteAnimStateParser = 0x0108BA40; // sprite animation: playOnState/isLoop
    constexpr uintptr_t kAnimTimeParser = 0x01086590; // 
    constexpr uintptr_t kParticleEmitterParser = 0x00E88CF0; // particle emitter definitions
    constexpr uintptr_t kRendererConditionParser = 0x010B3C50; // state-machine <Condition> evaluation
    constexpr uintptr_t kSpriteRenderParser = 0x0095B8F0; // 
    constexpr uintptr_t kLoginPacketBuilder = 0x00E3BE40; // 
    constexpr uintptr_t kTileActionBuilder = 0x00B7C380; // 
    constexpr uintptr_t kDialogButtonBuilder = 0x0116FC70; // 
    constexpr uintptr_t kNetAvatarSpawnHandler = 0x00BC4310; // 
    constexpr uintptr_t kGameUpdatePacketSerializer = 0x00A93BA0; // 
    constexpr uintptr_t kNetAvatarNetIDEmitter = 0x00BC1790; // 
    constexpr uintptr_t kIAPPurchaseValidation = 0x00D94F10; // 
    constexpr uintptr_t kOnVariantDispatcher = 0x00BB8910; // 
    constexpr uintptr_t kPunchAction = 0x00E573B0; // 
    constexpr uintptr_t kGetApp = 0x00A00390; // leaf without unwind data; not a .pdata entry
    constexpr uintptr_t kGetClient = 0x00A91610; // kAppClientOffset = 0xB10 (derived)
    constexpr uintptr_t kGetPacketProcessor = 0x00BB3650; // kAppPacketProcessorOffset = 0x1258 (derived)
    constexpr uintptr_t kGetLocalAvatar = 0x00BB3820; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)

    struct Binding { const char* name; unsigned int rva; };
    struct BindingTable { unsigned int rva; const Binding* rows; int count; };
    constexpr Binding kBind0[] = {
        {"_G", 0x01655B40},
        {"package", 0x01660F00},
        {"coroutine", 0x016561B0},
        {"table", 0x01657120},
        {"io", 0x01658930},
        {"os", 0x01659520},
        {"string", 0x0165D4A0},
        {"math", 0x0165EC60},
        {"utf8", 0x0165DE00},
        {"debug", 0x016600A0},
    };
    constexpr Binding kBind1[] = {
        {"assert", 0x01654AD0},
        {"collectgarbage", 0x01655480},
        {"dofile", 0x01654A40},
        {"error", 0x01655190},
        {"getmetatable", 0x01655210},
        {"ipairs", 0x01655800},
        {"loadfile", 0x01655850},
        {"load", 0x01654940},
        {"next", 0x01655700},
        {"pairs", 0x01655760},
        {"pcall", 0x01654C70},
        {"print", 0x01654E00},
        {"warn", 0x01654EF0},
        {"rawequal", 0x01655320},
        {"rawlen", 0x01655370},
        {"rawget", 0x016553D0},
        {"rawset", 0x01655420},
        {"select", 0x01654BB0},
        {"setmetatable", 0x01655270},
        {"tonumber", 0x01654FA0},
        {"tostring", 0x01654DD0},
        {"type", 0x016556A0},
        {"xpcall", 0x01654D10},
    };
    constexpr Binding kBind2[] = {
        {"create", 0x01655C70},
        {"resume", 0x01655BC0},
        {"running", 0x01655E50},
        {"status", 0x01655D70},
        {"wrap", 0x01655CD0},
        {"yield", 0x01655D40},
        {"isyieldable", 0x01655DE0},
        {"close", 0x01655E80},
    };
    constexpr Binding kBind3[] = {
        {"concat", 0x01656760},
        {"insert", 0x01656200},
        {"pack", 0x01656990},
        {"unpack", 0x01656A40},
        {"remove", 0x01656390},
        {"move", 0x01656510},
        {"sort", 0x01656B30},
    };
    constexpr Binding kBind4[] = {
        {"close", 0x016579C0},
        {"flush", 0x01657770},
        {"input", 0x01657170},
        {"lines", 0x016572E0},
        {"open", 0x01657AB0},
        {"output", 0x01657200},
        {"popen", 0x01657BF0},
        {"read", 0x01657400},
        {"tmpfile", 0x01657CD0},
        {"type", 0x01657880},
        {"write", 0x016574D0},
    };
    constexpr Binding kBind5[] = {
        {"read", 0x01657470},
        {"write", 0x01657540},
        {"lines", 0x01657290},
        {"flush", 0x01657800},
        {"seek", 0x016575B0},
        {"close", 0x01657950},
        {"setvbuf", 0x016576A0},
    };
    constexpr Binding kBind6[] = {
        {"__gc", 0x01657A50},
        {"__close", 0x01657A50},
        {"__tostring", 0x016578F0},
    };
    constexpr Binding kBind7[] = {
        {"clock", 0x01659290},
        {"date", 0x01658B40},
        {"difftime", 0x01658F50},
        {"execute", 0x01659090},
        {"exit", 0x01659010},
        {"getenv", 0x01659250},
        {"remove", 0x01659100},
        {"rename", 0x01659160},
        {"setlocale", 0x01658FA0},
        {"time", 0x01658DC0},
        {"tmpname", 0x016591E0},
    };
    constexpr Binding kBind8[] = {
        {"byte", 0x01659A40},
        {"char", 0x01659B60},
        {"dump", 0x01659C40},
    };
    constexpr Binding kBind9[] = {
        {"format", 0x0165A170},
        {"gmatch", 0x01659E10},
        {"gsub", 0x01659F20},
        {"len", 0x01659570},
        {"lower", 0x01659730},
    };
    constexpr Binding kBind10[] = {
        {"rep", 0x016598B0},
        {"reverse", 0x01659690},
        {"sub", 0x016595A0},
        {"upper", 0x016597F0},
        {"pack", 0x0165A9B0},
        {"packsize", 0x0165B080},
        {"unpack", 0x0165B220},
    };
    constexpr Binding kBind11[] = {
        {"offset", 0x0165DA10},
        {"codepoint", 0x0165D6E0},
        {"char", 0x0165D8F0},
        {"len", 0x0165D570},
        {"codes", 0x0165DB90},
    };
    constexpr Binding kBind12[] = {
        {"abs", 0x0165DE80},
        {"acos", 0x0165DFB0},
        {"asin", 0x0165DF80},
        {"atan", 0x0165DFE0},
        {"ceil", 0x0165E120},
        {"cos", 0x0165DF20},
        {"deg", 0x0165E4F0},
        {"exp", 0x0165E4C0},
        {"tointeger", 0x0165E040},
        {"floor", 0x0165E0A0},
        {"fmod", 0x0165E1A0},
        {"ult", 0x0165E3B0},
        {"log", 0x0165E400},
        {"max", 0x0165E610},
        {"min", 0x0165E570},
        {"modf", 0x0165E2A0},
        {"rad", 0x0165E530},
        {"sin", 0x0165DEF0},
        {"sqrt", 0x0165E370},
        {"tan", 0x0165DF50},
        {"type", 0x0165E6B0},
    };
    constexpr Binding kBind13[] = {
        {"debug", 0x0165FD00},
        {"getuservalue", 0x0165EE60},
        {"gethook", 0x0165FB80},
        {"getinfo", 0x0165EF60},
        {"getlocal", 0x0165F3F0},
        {"getregistry", 0x0165EDA0},
        {"getmetatable", 0x0165EDC0},
        {"getupvalue", 0x0165F6E0},
        {"upvaluejoin", 0x0165F870},
        {"upvalueid", 0x0165F7F0},
        {"setuservalue", 0x0165EEE0},
        {"sethook", 0x0165F990},
        {"setlocal", 0x0165F570},
        {"setmetatable", 0x0165EE00},
        {"setupvalue", 0x0165F760},
        {"traceback", 0x0165FEF0},
        {"setcstacklimit", 0x0165FFC0},
    };
    constexpr Binding kBind14[] = {
        {"CreateContext", 0x016292C0},
        {"LoadFontFace", 0x016293E0},
        {"RegisterTag", 0x01629520},
    };
    constexpr Binding kBind15[] = {
        {"contexts", 0x01629620},
        {"key_identifier", 0x01629660},
        {"key_modifier", 0x016296A0},
    };
    constexpr Binding kBind16[] = {
        {"red", 0x0162B3B0},
        {"green", 0x0162B400},
        {"blue", 0x0162B450},
        {"alpha", 0x0162B4A0},
        {"rgba", 0x0162B4F0},
    };
    constexpr Binding kBind17[] = {
        {"red", 0x0162B570},
        {"green", 0x0162B5D0},
        {"blue", 0x0162B630},
        {"alpha", 0x0162B690},
        {"rgba", 0x0162B6F0},
    };
    constexpr Binding kBind18[] = {
        {"red", 0x0162BDC0},
        {"green", 0x0162BE10},
        {"blue", 0x0162BE60},
        {"alpha", 0x0162BEB0},
        {"rgba", 0x0162BF00},
    };
    constexpr Binding kBind19[] = {
        {"red", 0x0162BF90},
        {"green", 0x0162C000},
        {"blue", 0x0162C070},
        {"alpha", 0x0162C0E0},
        {"rgba", 0x0162C150},
    };
    constexpr Binding kBind20[] = {
        {"AddEventListener", 0x0162CAA0},
        {"CreateDocument", 0x0162CFB0},
        {"LoadDocument", 0x0162D0C0},
        {"Render", 0x0162D1B0},
        {"UnloadAllDocuments", 0x0162D1E0},
        {"UnloadDocument", 0x0162D200},
        {"Update", 0x0162D240},
        {"OpenDataModel", 0x0162C650},
        {"ProcessMouseMove", 0x0162C690},
        {"ProcessMouseButtonDown", 0x0162C710},
        {"ProcessMouseButtonUp", 0x0162C770},
        {"ProcessMouseWheel", 0x0162C7D0},
        {"ProcessMouseLeave", 0x0162C840},
        {"IsMouseInteracting", 0x0162C870},
        {"ProcessKeyDown", 0x0162C8A0},
        {"ProcessKeyUp", 0x0162C900},
        {"ProcessTextInput", 0x0162C960},
    };
    constexpr Binding kBind21[] = {
        {"dimensions", 0x0162D270},
        {"documents", 0x0162D2E0},
        {"dp_ratio", 0x0162D350},
        {"focus_element", 0x0162D390},
        {"hover_element", 0x0162D3F0},
        {"name", 0x0162D450},
        {"root_element", 0x0162D4B0},
    };
    constexpr Binding kBind22[] = {
        {"PullToFront", 0x0162E180},
        {"PushToBack", 0x0162E1A0},
        {"Show", 0x0162E1C0},
        {"Hide", 0x0162E240},
        {"Close", 0x0162E260},
        {"CreateElement", 0x0162E280},
        {"CreateTextNode", 0x0162E3F0},
    };
    constexpr Binding kBind23[] = {
        {"AddEventListener", 0x0162EDD0},
        {"AppendChild", 0x0162F030},
        {"Blur", 0x0162F130},
        {"Click", 0x0162F150},
        {"DispatchEvent", 0x0162F170},
        {"Focus", 0x0162F6C0},
        {"GetAttribute", 0x0162F6E0},
        {"GetElementById", 0x0162F7D0},
        {"GetElementsByTagName", 0x0162F8C0},
        {"QuerySelector", 0x0162FBD0},
        {"QuerySelectorAll", 0x0162FCC0},
        {"Matches", 0x0162FFD0},
        {"HasAttribute", 0x016300A0},
        {"HasChildNodes", 0x01630170},
        {"InsertBefore", 0x016301A0},
        {"IsClassSet", 0x016302C0},
        {"RemoveAttribute", 0x01630390},
        {"RemoveChild", 0x01630450},
        {"ReplaceChild", 0x016304C0},
        {"ScrollIntoView", 0x016305F0},
        {"SetAttribute", 0x01630620},
        {"SetClass", 0x01630790},
    };
    constexpr Binding kBind24[] = {
        {"attributes", 0x01630880},
        {"child_nodes", 0x016308F0},
        {"class_name", 0x01630960},
        {"client_left", 0x01630A20},
        {"client_height", 0x01630A80},
        {"client_top", 0x01630AE0},
        {"client_width", 0x01630B40},
        {"first_child", 0x01630BA0},
        {"id", 0x01630C00},
        {"inner_rml", 0x01630C60},
        {"last_child", 0x01630D10},
        {"next_sibling", 0x01630D70},
        {"offset_height", 0x01630DD0},
        {"offset_left", 0x01630E30},
        {"offset_parent", 0x01630E90},
        {"offset_top", 0x01630EF0},
        {"offset_width", 0x01630F50},
        {"owner_document", 0x01630FB0},
        {"parent_node", 0x01631010},
        {"previous_sibling", 0x01631070},
        {"scroll_height", 0x016310D0},
        {"scroll_left", 0x01631130},
        {"scroll_top", 0x01631190},
        {"scroll_width", 0x016311F0},
        {"style", 0x01631250},
        {"tag_name", 0x016312C0},
    };
    constexpr Binding kBind25[] = {
        {"class_name", 0x01631320},
        {"id", 0x01631410},
        {"inner_rml", 0x01631500},
        {"scroll_left", 0x01631600},
        {"scroll_top", 0x01631670},
    };
    constexpr Binding kBind26[] = {
        {"current_element", 0x01633620},
        {"type", 0x01633680},
        {"target_element", 0x01633860},
        {"parameters", 0x016338C0},
    };
    constexpr Binding kBind27[] = {
        {"DotProduct", 0x01634650},
        {"Normalise", 0x016346C0},
        {"Rotate", 0x01634770},
    };
    constexpr Binding kBind28[] = {
        {"x", 0x01634840},
        {"y", 0x01634890},
        {"magnitude", 0x016348E0},
    };
    constexpr Binding kBind29[] = {
        {"x", 0x01635140},
        {"y", 0x01635190},
        {"magnitude", 0x016351E0},
    };
    constexpr Binding kBind30[] = {
        {"disabled", 0x01635D10},
        {"name", 0x01635D60},
        {"value", 0x01635E10},
    };
    constexpr Binding kBind31[] = {
        {"disabled", 0x01635ED0},
        {"name", 0x01635F40},
        {"value", 0x01636030},
    };
    constexpr Binding kBind32[] = {
        {"Select", 0x01636480},
        {"SetSelection", 0x016364A0},
        {"GetSelection", 0x016364F0},
    };
    constexpr Binding kBind33[] = {
        {"checked", 0x016365D0},
        {"maxlength", 0x016366C0},
        {"size", 0x016367C0},
        {"max", 0x016368B0},
        {"min", 0x016369A0},
        {"step", 0x01636A90},
    };
    constexpr Binding kBind34[] = {
        {"checked", 0x01636B80},
        {"maxlength", 0x01636CE0},
        {"size", 0x01636DE0},
        {"max", 0x01636ED0},
        {"min", 0x01636FD0},
        {"step", 0x016370D0},
    };
    constexpr Binding kBind35[] = {
        {"Add", 0x016376B0},
        {"Remove", 0x01637860},
        {"RemoveAll", 0x016379B0},
    };
    constexpr Binding kBind36[] = {
        {"Select", 0x01637F10},
        {"SetSelection", 0x01637F30},
        {"GetSelection", 0x01637F80},
    };
    constexpr Binding kBind37[] = {
        {"cols", 0x01638060},
        {"maxlength", 0x016380B0},
        {"rows", 0x01638100},
        {"wordwrap", 0x01638150},
    };
    constexpr Binding kBind38[] = {
        {"cols", 0x016381A0},
        {"maxlength", 0x01638200},
        {"rows", 0x01638260},
        {"wordwrap", 0x016382C0},
    };
    constexpr BindingTable kBindingTables[] = {
        {0x02011900, kBind0, 10},
        {0x020125A0, kBind1, 23},
        {0x020129D0, kBind2, 8},
        {0x02012BD0, kBind3, 7},
        {0x02012D60, kBind4, 11},
        {0x02012E20, kBind5, 7},
        {0x02012EB0, kBind6, 3},
        {0x02013220, kBind7, 11},
        {0x020134B0, kBind8, 3},
        {0x020134F0, kBind9, 5},
        {0x02013550, kBind10, 7},
        {0x02013BA0, kBind11, 5},
        {0x02013CC0, kBind12, 21},
        {0x02013F40, kBind13, 17},
        {0x024D09E0, kBind14, 3},
        {0x024D0A20, kBind15, 3},
        {0x024D0A60, kBind16, 5},
        {0x024D0AC0, kBind17, 5},
        {0x024D0B20, kBind18, 5},
        {0x024D0B80, kBind19, 5},
        {0x024D0BE0, kBind20, 17},
        {0x024D0D00, kBind21, 7},
        {0x024D0DD0, kBind22, 7},
        {0x024D0EA0, kBind23, 22},
        {0x024D1010, kBind24, 26},
        {0x024D11C0, kBind25, 5},
        {0x024D12F0, kBind26, 4},
        {0x024D1340, kBind27, 3},
        {0x024D1380, kBind28, 3},
        {0x024D13F0, kBind29, 3},
        {0x024D1480, kBind30, 3},
        {0x024D14C0, kBind31, 3},
        {0x024D1500, kBind32, 3},
        {0x024D1540, kBind33, 6},
        {0x024D15B0, kBind34, 6},
        {0x024D1620, kBind35, 3},
        {0x024D16B0, kBind36, 3},
        {0x024D16F0, kBind37, 4},
        {0x024D1740, kBind38, 4},
    };
}
