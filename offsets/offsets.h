// Growtopia x64 offsets - generated 2026-09-18 10:12:59Z
// image base 0x140000000  build hash eab2f02f6c6b5e1d
#pragma once
namespace gt {
    constexpr uintptr_t kSendPacket = 0x00C464C0; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    constexpr uintptr_t kSendPacketRaw = 0x00C465E0; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    constexpr uintptr_t kProcessTankUpdatePacket = 0x00B43830; // incoming PACKET_* dispatcher
    constexpr uintptr_t kVariantListSerializeFromMem = 0x0128CEE0; // VariantList::SerializeFromMem
    constexpr uintptr_t kPacketTypeDispatcher = 0x00A166B0; // 
    constexpr uintptr_t kPacketLengthValidator = 0x00C43550; // 
    constexpr uintptr_t kTrackPacketSender = 0x00B78A80; // 
    constexpr uintptr_t kENetHostConnectSetup = 0x00A16290; // 
    constexpr uintptr_t kPlayerItems_AddItem = 0x00C4B3C0; // 
    constexpr uintptr_t kPlayerItems_HaveRoomForItem = 0x00C4C550; // 
    constexpr uintptr_t kPlayerItems_RemoveItem = 0x00C4DCD0; // 
    constexpr uintptr_t kInventoryIllegalItemPurge = 0x00C4DE20; // 
    constexpr uintptr_t kItemsDatLoader = 0x00C62340; // 
    constexpr uintptr_t kItemValidator = 0x00C61DE0; // 
    constexpr uintptr_t kItemHashCheck = 0x00C33B00; // 
    constexpr uintptr_t kItemSurfaceRender = 0x00A47B60; // 
    constexpr uintptr_t kChooseVisual = 0x00C827C0; // 
    constexpr uintptr_t kWorld_Load = 0x0145F590; // 
    constexpr uintptr_t kWorldVersionCheck = 0x00B43830; // 
    constexpr uintptr_t kTileExtraParser = 0x00C73C90; // 
    constexpr uintptr_t kWhiteDoorLookup = 0x0145ED90; // 
    constexpr uintptr_t kTilesheetLoader = 0x00A36DA0; // 
    constexpr uintptr_t kBgItemMapValidator = 0x00C62B80; // 
    constexpr uintptr_t kNetAvatar_OnAvatarBePaintBalled = 0x00AEF750; // 
    constexpr uintptr_t kPunchHackDetector = 0x00AF4250; // 
    constexpr uintptr_t kPunchNoTileHandler = 0x009B4BD0; // 
    constexpr uintptr_t kHarvestInteraction = 0x00A1F3A0; // 
    constexpr uintptr_t kCameraManager = 0x00A331D0; // 
    constexpr uintptr_t kDialogBuilder = 0x00CFD640; // 
    constexpr uintptr_t kBannerDialogBuilder = 0x00D775D0; // 
    constexpr uintptr_t kEnableAllButtonsEntity = 0x011E2FB0; // 
    constexpr uintptr_t kController_PushController = 0x00D8CCF0; // 
    constexpr uintptr_t kController_PopController = 0x00D8CAD0; // 
    constexpr uintptr_t kController_PushChildController = 0x01091B70; // 
    constexpr uintptr_t kController_OnActivate = 0x00DC8120; // 
    constexpr uintptr_t kController_Deactivate = 0x00DC7D60; // 
    constexpr uintptr_t kController_Release = 0x00989460; // 
    constexpr uintptr_t kUIController_OnActivate = 0x010E5E20; // 
    constexpr uintptr_t kUIController_OnDeactivate = 0x010E6410; // 
    constexpr uintptr_t kUIController_RemoveScreenView = 0x010E6690; // 
    constexpr uintptr_t kParticleEmitter_GetPaintballColor = 0x00E174B0; // 
    constexpr uintptr_t kRTFont_GetColorFromString = 0x00D64BB0; // 
    constexpr uintptr_t kResourceManager_GetSurfaceResource = 0x01254790; // 
    constexpr uintptr_t kVideoModeManager_SetVideoMode = 0x00DB7580; // 
    constexpr uintptr_t kVideoModeManager_SetFullscreen = 0x00DB6E90; // 
    constexpr uintptr_t kVideoModeManager_AddVideoMode = 0x00DB47C0; // self-naming anchor: AddVideoMode logs its own name once; a 5
    constexpr uintptr_t kVideoModeManager_GetCustomVideoModes = 0x00DB4D80; // 
    constexpr uintptr_t kVideoModeManager_OnWMSize = 0x00DB6F60; // 
    constexpr uintptr_t kIAPManager_LoadCurrenciesConfig = 0x011A8880; // 
    constexpr uintptr_t kIAPManager_ctor = 0x011B49B0; // 
    constexpr uintptr_t kApp_Kill = 0x00988410; // 
    constexpr uintptr_t kStoreBuyPacketPath = 0x00D738A0; // 
    constexpr uintptr_t kTileCoordinateHandler = 0x009B3180; // 
    constexpr uintptr_t kLogDisplayEntityBuilder = 0x011E6BA0; // NOT LogToConsole: the sole owner of this string also refs Ge
    constexpr uintptr_t kItemRendererXmlLoader = 0x00FD4C00; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    constexpr uintptr_t kBattlePetConfigLoader = 0x00BCE510; // 
    constexpr uintptr_t kOwlsOfAthenaPets_RenderPet = 0x00779E70; // 
    constexpr uintptr_t kFlying2Pets_RenderPet = 0x008EFCE0; // 
    constexpr uintptr_t kScepter_RenderPet = 0x006A24E0; // 
    constexpr uintptr_t kOwlsOfAthenaPets_OnRespawned = 0x00764F80; // 
    constexpr uintptr_t kFlying2Pets_OnRespawned = 0x008DA8F0; // 
    constexpr uintptr_t kFactionIconLoader = 0x00AE9D90; // 
    constexpr uintptr_t kPlayerProgression = 0x016AC4F0; // 
    constexpr uintptr_t kTextOverlayActionHandler = 0x00B401A0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    constexpr uintptr_t kInventoryTabUI = 0x010B4B60; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    constexpr uintptr_t kCaptchaInputDialog = 0x00D0CA90; // 
    constexpr uintptr_t kAuthClient_Login = 0x016C1820; // 
    constexpr uintptr_t kWorldTileMap = 0x00C8A060; // the tile-map container: dimensions + tile count
    constexpr uintptr_t kTileLookupGuard = 0x009CA590; // tile lookup / punch target resolution
    constexpr uintptr_t kTilesheetPageLoader = 0x00D0EE40; // tile sheet texture loader
    constexpr uintptr_t kWorldValidation = 0x010FC3E0; // world validation pass
    constexpr uintptr_t kWeaponDamageTierText = 0x00C10EA0; // weapon damage tier description
    constexpr uintptr_t kGrowtorialButton = 0x00CC21F0; // 
    constexpr uintptr_t kWorldLockText = 0x00AFB5C0; // 
    constexpr uintptr_t kSeedTreeItemPath = 0x00CED4B0; // 
    constexpr uintptr_t kTileDefinitionsLoader = 0x00C2F070; // 
    constexpr uintptr_t kWeatherEffectText = 0x00C085F0; // 
    constexpr uintptr_t kItemEffectVariantDispatcher = 0x00B041D0; // second On* dispatcher (43 handlers): item/cosmetic effect va
    constexpr uintptr_t kOnDeathEquipTagHandler = 0x00FDB570; // also OnEquipTag; death + equip-tag handling
    constexpr uintptr_t kOnDisconnectedHandler = 0x00B39300; // 
    constexpr uintptr_t kOnErrorFinishHandler = 0x00A758B0; // also OnFinish
    constexpr uintptr_t kOnOverMoveHandler = 0x011BF6E0; // also OnOverEnd; hover/drag move
    constexpr uintptr_t kOnEventHandler = 0x0106C640; // 
    constexpr uintptr_t kOnRenderHandler = 0x012338F0; // 
    constexpr uintptr_t kOnFakeScrollToEntity = 0x01225920; // 
    constexpr uintptr_t kOnDeleteHandler = 0x017178A0; // 
    constexpr uintptr_t kOnButtonSelectedHandler = 0x00D12740; // 
    constexpr uintptr_t kTradeHandler = 0x00D87450; // 
    constexpr uintptr_t kTradeOtherPlayerGuard = 0x00D85D10; // 
    constexpr uintptr_t kStateMachineTransitions = 0x01034EC0; // item-renderer state-machine transitions
    constexpr uintptr_t kAnimCurveKeyFrameParser = 0x01010E20; // animation curve/keyframe parser
    constexpr uintptr_t kSpriteAnimStateParser = 0x01017DC0; // sprite animation: playOnState/isLoop
    constexpr uintptr_t kAnimTimeParser = 0x01012910; // 
    constexpr uintptr_t kParticleEmitterParser = 0x00E174B0; // particle emitter definitions
    constexpr uintptr_t kRendererConditionParser = 0x01037300; // state-machine <Condition> evaluation
    constexpr uintptr_t kSpriteRenderParser = 0x008E04B0; // 
    constexpr uintptr_t kLoginPacketBuilder = 0x00DCA460; // 
    constexpr uintptr_t kTileActionBuilder = 0x00AF66C0; // 
    constexpr uintptr_t kDialogButtonBuilder = 0x010F4D40; // 
    constexpr uintptr_t kNetAvatarSpawnHandler = 0x00B3E690; // 
    constexpr uintptr_t kGameUpdatePacketSerializer = 0x00A187E0; // 
    constexpr uintptr_t kNetAvatarNetIDEmitter = 0x00B3BB10; // 
    constexpr uintptr_t kIAPPurchaseValidation = 0x00D22F70; // 
    constexpr uintptr_t kOnVariantDispatcher = 0x00B32C90; // 
    constexpr uintptr_t kPunchAction = 0x00DE5970; // 
    constexpr uintptr_t kGetApp = 0x00984F70; // leaf without unwind data; not a .pdata entry
    constexpr uintptr_t kGetClient = 0x00A16270; // kAppClientOffset = 0xB10 (derived)
    constexpr uintptr_t kGetPacketProcessor = 0x00B2D9D0; // kAppPacketProcessorOffset = 0x1258 (derived)
    constexpr uintptr_t kGetLocalAvatar = 0x00B2DBA0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)

    struct Binding { const char* name; unsigned int rva; };
    struct BindingTable { unsigned int rva; const Binding* rows; int count; };
    constexpr Binding kBind0[] = {
        {"_G", 0x015E6E40},
        {"package", 0x015F2200},
        {"coroutine", 0x015E74B0},
        {"table", 0x015E8420},
        {"io", 0x015E9C30},
        {"os", 0x015EA820},
        {"string", 0x015EE7A0},
        {"math", 0x015EFF60},
        {"utf8", 0x015EF100},
        {"debug", 0x015F13A0},
    };
    constexpr Binding kBind1[] = {
        {"assert", 0x015E5DD0},
        {"collectgarbage", 0x015E6780},
        {"dofile", 0x015E5D40},
        {"error", 0x015E6490},
        {"getmetatable", 0x015E6510},
        {"ipairs", 0x015E6B00},
        {"loadfile", 0x015E6B50},
        {"load", 0x015E5C40},
        {"next", 0x015E6A00},
        {"pairs", 0x015E6A60},
        {"pcall", 0x015E5F70},
        {"print", 0x015E6100},
        {"warn", 0x015E61F0},
        {"rawequal", 0x015E6620},
        {"rawlen", 0x015E6670},
        {"rawget", 0x015E66D0},
        {"rawset", 0x015E6720},
        {"select", 0x015E5EB0},
        {"setmetatable", 0x015E6570},
        {"tonumber", 0x015E62A0},
        {"tostring", 0x015E60D0},
        {"type", 0x015E69A0},
        {"xpcall", 0x015E6010},
    };
    constexpr Binding kBind2[] = {
        {"create", 0x015E6F70},
        {"resume", 0x015E6EC0},
        {"running", 0x015E7150},
        {"status", 0x015E7070},
        {"wrap", 0x015E6FD0},
        {"yield", 0x015E7040},
        {"isyieldable", 0x015E70E0},
        {"close", 0x015E7180},
    };
    constexpr Binding kBind3[] = {
        {"concat", 0x015E7A60},
        {"insert", 0x015E7500},
        {"pack", 0x015E7C90},
        {"unpack", 0x015E7D40},
        {"remove", 0x015E7690},
        {"move", 0x015E7810},
        {"sort", 0x015E7E30},
    };
    constexpr Binding kBind4[] = {
        {"close", 0x015E8CC0},
        {"flush", 0x015E8A70},
        {"input", 0x015E8470},
        {"lines", 0x015E85E0},
        {"open", 0x015E8DB0},
        {"output", 0x015E8500},
        {"popen", 0x015E8EF0},
        {"read", 0x015E8700},
        {"tmpfile", 0x015E8FD0},
        {"type", 0x015E8B80},
        {"write", 0x015E87D0},
    };
    constexpr Binding kBind5[] = {
        {"read", 0x015E8770},
        {"write", 0x015E8840},
        {"lines", 0x015E8590},
        {"flush", 0x015E8B00},
        {"seek", 0x015E88B0},
        {"close", 0x015E8C50},
        {"setvbuf", 0x015E89A0},
    };
    constexpr Binding kBind6[] = {
        {"__gc", 0x015E8D50},
        {"__close", 0x015E8D50},
        {"__tostring", 0x015E8BF0},
    };
    constexpr Binding kBind7[] = {
        {"clock", 0x015EA590},
        {"date", 0x015E9E40},
        {"difftime", 0x015EA250},
        {"execute", 0x015EA390},
        {"exit", 0x015EA310},
        {"getenv", 0x015EA550},
        {"remove", 0x015EA400},
        {"rename", 0x015EA460},
        {"setlocale", 0x015EA2A0},
        {"time", 0x015EA0C0},
        {"tmpname", 0x015EA4E0},
    };
    constexpr Binding kBind8[] = {
        {"byte", 0x015EAD40},
        {"char", 0x015EAE60},
        {"dump", 0x015EAF40},
    };
    constexpr Binding kBind9[] = {
        {"format", 0x015EB470},
        {"gmatch", 0x015EB110},
        {"gsub", 0x015EB220},
        {"len", 0x015EA870},
        {"lower", 0x015EAA30},
    };
    constexpr Binding kBind10[] = {
        {"rep", 0x015EABB0},
        {"reverse", 0x015EA990},
        {"sub", 0x015EA8A0},
        {"upper", 0x015EAAF0},
        {"pack", 0x015EBCB0},
        {"packsize", 0x015EC380},
        {"unpack", 0x015EC520},
    };
    constexpr Binding kBind11[] = {
        {"offset", 0x015EED10},
        {"codepoint", 0x015EE9E0},
        {"char", 0x015EEBF0},
        {"len", 0x015EE870},
        {"codes", 0x015EEE90},
    };
    constexpr Binding kBind12[] = {
        {"abs", 0x015EF180},
        {"acos", 0x015EF2B0},
        {"asin", 0x015EF280},
        {"atan", 0x015EF2E0},
        {"ceil", 0x015EF420},
        {"cos", 0x015EF220},
        {"deg", 0x015EF7F0},
        {"exp", 0x015EF7C0},
        {"tointeger", 0x015EF340},
        {"floor", 0x015EF3A0},
        {"fmod", 0x015EF4A0},
        {"ult", 0x015EF6B0},
        {"log", 0x015EF700},
        {"max", 0x015EF910},
        {"min", 0x015EF870},
        {"modf", 0x015EF5A0},
        {"rad", 0x015EF830},
        {"sin", 0x015EF1F0},
        {"sqrt", 0x015EF670},
        {"tan", 0x015EF250},
        {"type", 0x015EF9B0},
    };
    constexpr Binding kBind13[] = {
        {"debug", 0x015F1000},
        {"getuservalue", 0x015F0160},
        {"gethook", 0x015F0E80},
        {"getinfo", 0x015F0260},
        {"getlocal", 0x015F06F0},
        {"getregistry", 0x015F00A0},
        {"getmetatable", 0x015F00C0},
        {"getupvalue", 0x015F09E0},
        {"upvaluejoin", 0x015F0B70},
        {"upvalueid", 0x015F0AF0},
        {"setuservalue", 0x015F01E0},
        {"sethook", 0x015F0C90},
        {"setlocal", 0x015F0870},
        {"setmetatable", 0x015F0100},
        {"setupvalue", 0x015F0A60},
        {"traceback", 0x015F11F0},
        {"setcstacklimit", 0x015F12C0},
    };
    constexpr Binding kBind14[] = {
        {"CreateContext", 0x015BA5C0},
        {"LoadFontFace", 0x015BA6E0},
        {"RegisterTag", 0x015BA820},
    };
    constexpr Binding kBind15[] = {
        {"contexts", 0x015BA920},
        {"key_identifier", 0x015BA960},
        {"key_modifier", 0x015BA9A0},
    };
    constexpr Binding kBind16[] = {
        {"red", 0x015BC6B0},
        {"green", 0x015BC700},
        {"blue", 0x015BC750},
        {"alpha", 0x015BC7A0},
        {"rgba", 0x015BC7F0},
    };
    constexpr Binding kBind17[] = {
        {"red", 0x015BC870},
        {"green", 0x015BC8D0},
        {"blue", 0x015BC930},
        {"alpha", 0x015BC990},
        {"rgba", 0x015BC9F0},
    };
    constexpr Binding kBind18[] = {
        {"red", 0x015BD0C0},
        {"green", 0x015BD110},
        {"blue", 0x015BD160},
        {"alpha", 0x015BD1B0},
        {"rgba", 0x015BD200},
    };
    constexpr Binding kBind19[] = {
        {"red", 0x015BD290},
        {"green", 0x015BD300},
        {"blue", 0x015BD370},
        {"alpha", 0x015BD3E0},
        {"rgba", 0x015BD450},
    };
    constexpr Binding kBind20[] = {
        {"AddEventListener", 0x015BDDA0},
        {"CreateDocument", 0x015BE2B0},
        {"LoadDocument", 0x015BE3C0},
        {"Render", 0x015BE4B0},
        {"UnloadAllDocuments", 0x015BE4E0},
        {"UnloadDocument", 0x015BE500},
        {"Update", 0x015BE540},
        {"OpenDataModel", 0x015BD950},
        {"ProcessMouseMove", 0x015BD990},
        {"ProcessMouseButtonDown", 0x015BDA10},
        {"ProcessMouseButtonUp", 0x015BDA70},
        {"ProcessMouseWheel", 0x015BDAD0},
        {"ProcessMouseLeave", 0x015BDB40},
        {"IsMouseInteracting", 0x015BDB70},
        {"ProcessKeyDown", 0x015BDBA0},
        {"ProcessKeyUp", 0x015BDC00},
        {"ProcessTextInput", 0x015BDC60},
    };
    constexpr Binding kBind21[] = {
        {"dimensions", 0x015BE570},
        {"documents", 0x015BE5E0},
        {"dp_ratio", 0x015BE650},
        {"focus_element", 0x015BE690},
        {"hover_element", 0x015BE6F0},
        {"name", 0x015BE750},
        {"root_element", 0x015BE7B0},
    };
    constexpr Binding kBind22[] = {
        {"PullToFront", 0x015BF480},
        {"PushToBack", 0x015BF4A0},
        {"Show", 0x015BF4C0},
        {"Hide", 0x015BF540},
        {"Close", 0x015BF560},
        {"CreateElement", 0x015BF580},
        {"CreateTextNode", 0x015BF6F0},
    };
    constexpr Binding kBind23[] = {
        {"AddEventListener", 0x015C00D0},
        {"AppendChild", 0x015C0330},
        {"Blur", 0x015C0430},
        {"Click", 0x015C0450},
        {"DispatchEvent", 0x015C0470},
        {"Focus", 0x015C09C0},
        {"GetAttribute", 0x015C09E0},
        {"GetElementById", 0x015C0AD0},
        {"GetElementsByTagName", 0x015C0BC0},
        {"QuerySelector", 0x015C0ED0},
        {"QuerySelectorAll", 0x015C0FC0},
        {"Matches", 0x015C12D0},
        {"HasAttribute", 0x015C13A0},
        {"HasChildNodes", 0x015C1470},
        {"InsertBefore", 0x015C14A0},
        {"IsClassSet", 0x015C15C0},
        {"RemoveAttribute", 0x015C1690},
        {"RemoveChild", 0x015C1750},
        {"ReplaceChild", 0x015C17C0},
        {"ScrollIntoView", 0x015C18F0},
        {"SetAttribute", 0x015C1920},
        {"SetClass", 0x015C1A90},
    };
    constexpr Binding kBind24[] = {
        {"attributes", 0x015C1B80},
        {"child_nodes", 0x015C1BF0},
        {"class_name", 0x015C1C60},
        {"client_left", 0x015C1D20},
        {"client_height", 0x015C1D80},
        {"client_top", 0x015C1DE0},
        {"client_width", 0x015C1E40},
        {"first_child", 0x015C1EA0},
        {"id", 0x015C1F00},
        {"inner_rml", 0x015C1F60},
        {"last_child", 0x015C2010},
        {"next_sibling", 0x015C2070},
        {"offset_height", 0x015C20D0},
        {"offset_left", 0x015C2130},
        {"offset_parent", 0x015C2190},
        {"offset_top", 0x015C21F0},
        {"offset_width", 0x015C2250},
        {"owner_document", 0x015C22B0},
        {"parent_node", 0x015C2310},
        {"previous_sibling", 0x015C2370},
        {"scroll_height", 0x015C23D0},
        {"scroll_left", 0x015C2430},
        {"scroll_top", 0x015C2490},
        {"scroll_width", 0x015C24F0},
        {"style", 0x015C2550},
        {"tag_name", 0x015C25C0},
    };
    constexpr Binding kBind25[] = {
        {"class_name", 0x015C2620},
        {"id", 0x015C2710},
        {"inner_rml", 0x015C2800},
        {"scroll_left", 0x015C2900},
        {"scroll_top", 0x015C2970},
    };
    constexpr Binding kBind26[] = {
        {"current_element", 0x015C4920},
        {"type", 0x015C4980},
        {"target_element", 0x015C4B60},
        {"parameters", 0x015C4BC0},
    };
    constexpr Binding kBind27[] = {
        {"DotProduct", 0x015C5950},
        {"Normalise", 0x015C59C0},
        {"Rotate", 0x015C5A70},
    };
    constexpr Binding kBind28[] = {
        {"x", 0x015C5B40},
        {"y", 0x015C5B90},
        {"magnitude", 0x015C5BE0},
    };
    constexpr Binding kBind29[] = {
        {"x", 0x015C6440},
        {"y", 0x015C6490},
        {"magnitude", 0x015C64E0},
    };
    constexpr Binding kBind30[] = {
        {"disabled", 0x015C7010},
        {"name", 0x015C7060},
        {"value", 0x015C7110},
    };
    constexpr Binding kBind31[] = {
        {"disabled", 0x015C71D0},
        {"name", 0x015C7240},
        {"value", 0x015C7330},
    };
    constexpr Binding kBind32[] = {
        {"Select", 0x015C7780},
        {"SetSelection", 0x015C77A0},
        {"GetSelection", 0x015C77F0},
    };
    constexpr Binding kBind33[] = {
        {"checked", 0x015C78D0},
        {"maxlength", 0x015C79C0},
        {"size", 0x015C7AC0},
        {"max", 0x015C7BB0},
        {"min", 0x015C7CA0},
        {"step", 0x015C7D90},
    };
    constexpr Binding kBind34[] = {
        {"checked", 0x015C7E80},
        {"maxlength", 0x015C7FE0},
        {"size", 0x015C80E0},
        {"max", 0x015C81D0},
        {"min", 0x015C82D0},
        {"step", 0x015C83D0},
    };
    constexpr Binding kBind35[] = {
        {"Add", 0x015C89B0},
        {"Remove", 0x015C8B60},
        {"RemoveAll", 0x015C8CB0},
    };
    constexpr Binding kBind36[] = {
        {"Select", 0x015C9210},
        {"SetSelection", 0x015C9230},
        {"GetSelection", 0x015C9280},
    };
    constexpr Binding kBind37[] = {
        {"cols", 0x015C9360},
        {"maxlength", 0x015C93B0},
        {"rows", 0x015C9400},
        {"wordwrap", 0x015C9450},
    };
    constexpr Binding kBind38[] = {
        {"cols", 0x015C94A0},
        {"maxlength", 0x015C9500},
        {"rows", 0x015C9560},
        {"wordwrap", 0x015C95C0},
    };
    constexpr BindingTable kBindingTables[] = {
        {0x01FACAB0, kBind0, 10},
        {0x01FAD750, kBind1, 23},
        {0x01FADB80, kBind2, 8},
        {0x01FADD80, kBind3, 7},
        {0x01FADF10, kBind4, 11},
        {0x01FADFD0, kBind5, 7},
        {0x01FAE060, kBind6, 3},
        {0x01FAE3D0, kBind7, 11},
        {0x01FAE660, kBind8, 3},
        {0x01FAE6A0, kBind9, 5},
        {0x01FAE700, kBind10, 7},
        {0x01FAED50, kBind11, 5},
        {0x01FAEE70, kBind12, 21},
        {0x01FAF0F0, kBind13, 17},
        {0x024739E0, kBind14, 3},
        {0x02473A20, kBind15, 3},
        {0x02473A60, kBind16, 5},
        {0x02473AC0, kBind17, 5},
        {0x02473B20, kBind18, 5},
        {0x02473B80, kBind19, 5},
        {0x02473BE0, kBind20, 17},
        {0x02473D00, kBind21, 7},
        {0x02473DD0, kBind22, 7},
        {0x02473EA0, kBind23, 22},
        {0x02474010, kBind24, 26},
        {0x024741C0, kBind25, 5},
        {0x024742F0, kBind26, 4},
        {0x02474340, kBind27, 3},
        {0x02474380, kBind28, 3},
        {0x024743F0, kBind29, 3},
        {0x02474480, kBind30, 3},
        {0x024744C0, kBind31, 3},
        {0x02474500, kBind32, 3},
        {0x02474540, kBind33, 6},
        {0x024745B0, kBind34, 6},
        {0x02474620, kBind35, 3},
        {0x024746B0, kBind36, 3},
        {0x024746F0, kBind37, 4},
        {0x02474740, kBind38, 4},
    };
}
