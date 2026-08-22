// Growtopia x64 offsets - generated 2026-08-22 06:21:49Z
// image base 0x140000000  build hash a2a871afffa60ba9
#pragma once
namespace gt {
    constexpr uintptr_t kSendPacket = 0x00CC6C80; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    constexpr uintptr_t kSendPacketRaw = 0x00CC6DA0; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    constexpr uintptr_t kProcessTankUpdatePacket = 0x00BCB030; // incoming PACKET_* dispatcher
    constexpr uintptr_t kVariantListSerializeFromMem = 0x013079C0; // VariantList::SerializeFromMem
    constexpr uintptr_t kPacketTypeDispatcher = 0x00A931F0; // 
    constexpr uintptr_t kPacketLengthValidator = 0x00CC3D10; // 
    constexpr uintptr_t kTrackPacketSender = 0x00C00390; // 
    constexpr uintptr_t kENetHostConnectSetup = 0x00A92DD0; // 
    constexpr uintptr_t kPlayerItems_AddItem = 0x00CCBB80; // 
    constexpr uintptr_t kPlayerItems_HaveRoomForItem = 0x00CCCD10; // 
    constexpr uintptr_t kPlayerItems_RemoveItem = 0x00CCE490; // 
    constexpr uintptr_t kInventoryIllegalItemPurge = 0x00CCE5E0; // 
    constexpr uintptr_t kItemsDatLoader = 0x00CE2930; // 
    constexpr uintptr_t kItemValidator = 0x00CE23D0; // 
    constexpr uintptr_t kItemHashCheck = 0x00CB42C0; // 
    constexpr uintptr_t kItemSurfaceRender = 0x00AC4850; // 
    constexpr uintptr_t kChooseVisual = 0x00D02E80; // 
    constexpr uintptr_t kWorld_Load = 0x014DA290; // 
    constexpr uintptr_t kWorldVersionCheck = 0x00BCB030; // 
    constexpr uintptr_t kTileExtraParser = 0x00CF4280; // 
    constexpr uintptr_t kWhiteDoorLookup = 0x014D9A90; // 
    constexpr uintptr_t kTilesheetLoader = 0x00AB35C0; // 
    constexpr uintptr_t kBgItemMapValidator = 0x00CE3170; // 
    constexpr uintptr_t kNetAvatar_OnAvatarBePaintBalled = 0x00B76F50; // 
    constexpr uintptr_t kPunchHackDetector = 0x00B7BA50; // 
    constexpr uintptr_t kPunchNoTileHandler = 0x00A31790; // 
    constexpr uintptr_t kHarvestInteraction = 0x00A9BF00; // 
    constexpr uintptr_t kCameraManager = 0x00AAFA10; // 
    constexpr uintptr_t kDialogBuilder = 0x00D7E230; // 
    constexpr uintptr_t kBannerDialogBuilder = 0x00DF9D30; // 
    constexpr uintptr_t kEnableAllButtonsEntity = 0x0125D8F0; // 
    constexpr uintptr_t kController_PushController = 0x00E0F800; // 
    constexpr uintptr_t kController_PopController = 0x00E0F5E0; // 
    constexpr uintptr_t kController_PushChildController = 0x011183E0; // 
    constexpr uintptr_t kController_OnActivate = 0x00E48A40; // 
    constexpr uintptr_t kController_Deactivate = 0x00E48680; // 
    constexpr uintptr_t kController_Release = 0x00A06020; // 
    constexpr uintptr_t kUIController_OnActivate = 0x0116D180; // 
    constexpr uintptr_t kUIController_OnDeactivate = 0x0116D770; // 
    constexpr uintptr_t kUIController_RemoveScreenView = 0x0116D9F0; // 
    constexpr uintptr_t kParticleEmitter_GetPaintballColor = 0x00E97AC0; // 
    constexpr uintptr_t kRTFont_GetColorFromString = 0x00DE6ED0; // 
    constexpr uintptr_t kResourceManager_GetSurfaceResource = 0x012CF090; // 
    constexpr uintptr_t kVideoModeManager_SetVideoMode = 0x00E38D20; // 
    constexpr uintptr_t kVideoModeManager_SetFullscreen = 0x00E38630; // 
    constexpr uintptr_t kVideoModeManager_AddVideoMode = 0x00E35F60; // self-naming anchor: AddVideoMode logs its own name once; a 5
    constexpr uintptr_t kVideoModeManager_GetCustomVideoModes = 0x00E36520; // 
    constexpr uintptr_t kVideoModeManager_OnWMSize = 0x00E38700; // 
    constexpr uintptr_t kIAPManager_LoadCurrenciesConfig = 0x012231C0; // 
    constexpr uintptr_t kIAPManager_ctor = 0x0122F2F0; // 
    constexpr uintptr_t kApp_Kill = 0x00A04FD0; // 
    constexpr uintptr_t kStoreBuyPacketPath = 0x00DF5FA0; // 
    constexpr uintptr_t kTileCoordinateHandler = 0x00A2FD40; // 
    constexpr uintptr_t kLogDisplayEntityBuilder = 0x012614E0; // NOT LogToConsole: the sole owner of this string also refs Ge
    constexpr uintptr_t kItemRendererXmlLoader = 0x01052C70; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    constexpr uintptr_t kBattlePetConfigLoader = 0x00C4EC70; // 
    constexpr uintptr_t kOwlsOfAthenaPets_RenderPet = 0x007F69B0; // 
    constexpr uintptr_t kFlying2Pets_RenderPet = 0x0096C8F0; // 
    constexpr uintptr_t kScepter_RenderPet = 0x0071F770; // 
    constexpr uintptr_t kOwlsOfAthenaPets_OnRespawned = 0x007E1AC0; // 
    constexpr uintptr_t kFlying2Pets_OnRespawned = 0x009574B0; // 
    constexpr uintptr_t kFactionIconLoader = 0x00B71590; // 
    constexpr uintptr_t kPlayerProgression = 0x01726B70; // 
    constexpr uintptr_t kTextOverlayActionHandler = 0x00BC79A0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    constexpr uintptr_t kInventoryTabUI = 0x0113B540; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    constexpr uintptr_t kCaptchaInputDialog = 0x00D8D680; // 
    constexpr uintptr_t kAuthClient_Login = 0x0173BEA0; // 
    constexpr uintptr_t kWorldTileMap = 0x00D0A720; // the tile-map container: dimensions + tile count
    constexpr uintptr_t kTileLookupGuard = 0x00A47150; // tile lookup / punch target resolution
    constexpr uintptr_t kTilesheetPageLoader = 0x00D8FA30; // tile sheet texture loader
    constexpr uintptr_t kWorldValidation = 0x01183170; // world validation pass
    constexpr uintptr_t kWeaponDamageTierText = 0x00C91660; // weapon damage tier description
    constexpr uintptr_t kGrowtorialButton = 0x00D42B80; // 
    constexpr uintptr_t kWorldLockText = 0x00B82CF0; // 
    constexpr uintptr_t kSeedTreeItemPath = 0x00D6E0A0; // 
    constexpr uintptr_t kTileDefinitionsLoader = 0x00CAF830; // 
    constexpr uintptr_t kWeatherEffectText = 0x00C88DB0; // 
    constexpr uintptr_t kItemEffectVariantDispatcher = 0x00B8B900; // second On* dispatcher (43 handlers): item/cosmetic effect va
    constexpr uintptr_t kOnDeathEquipTagHandler = 0x01059020; // also OnEquipTag; death + equip-tag handling
    constexpr uintptr_t kOnDisconnectedHandler = 0x00BC0B00; // 
    constexpr uintptr_t kOnErrorFinishHandler = 0x00AF2630; // also OnFinish
    constexpr uintptr_t kOnOverMoveHandler = 0x0123A020; // also OnOverEnd; hover/drag move
    constexpr uintptr_t kOnEventHandler = 0x010F2E10; // 
    constexpr uintptr_t kOnRenderHandler = 0x012AE1F0; // 
    constexpr uintptr_t kOnFakeScrollToEntity = 0x012A0220; // 
    constexpr uintptr_t kOnDeleteHandler = 0x01791F20; // 
    constexpr uintptr_t kOnButtonSelectedHandler = 0x00D5DAA0; // 
    constexpr uintptr_t kTradeHandler = 0x00E09F60; // 
    constexpr uintptr_t kTradeOtherPlayerGuard = 0x00E08820; // 
    constexpr uintptr_t kStateMachineTransitions = 0x010BB990; // item-renderer state-machine transitions
    constexpr uintptr_t kAnimCurveKeyFrameParser = 0x0108E970; // animation curve/keyframe parser
    constexpr uintptr_t kSpriteAnimStateParser = 0x01095910; // sprite animation: playOnState/isLoop
    constexpr uintptr_t kAnimTimeParser = 0x01090460; // 
    constexpr uintptr_t kParticleEmitterParser = 0x00E97AC0; // particle emitter definitions
    constexpr uintptr_t kRendererConditionParser = 0x010BDC50; // state-machine <Condition> evaluation
    constexpr uintptr_t kSpriteRenderParser = 0x0095D070; // 
    constexpr uintptr_t kLoginPacketBuilder = 0x00E4AC10; // 
    constexpr uintptr_t kTileActionBuilder = 0x00B7DDE0; // 
    constexpr uintptr_t kDialogButtonBuilder = 0x0117BAD0; // 
    constexpr uintptr_t kNetAvatarSpawnHandler = 0x00BC5E90; // 
    constexpr uintptr_t kGameUpdatePacketSerializer = 0x00A95340; // 
    constexpr uintptr_t kNetAvatarNetIDEmitter = 0x00BC3310; // 
    constexpr uintptr_t kIAPPurchaseValidation = 0x00DA4040; // 
    constexpr uintptr_t kOnVariantDispatcher = 0x00BBA490; // 
    constexpr uintptr_t kPunchAction = 0x00E66180; // 
    constexpr uintptr_t kGetApp = 0x00A01B30; // leaf without unwind data; not a .pdata entry
    constexpr uintptr_t kGetClient = 0x00A92DB0; // kAppClientOffset = 0xB10 (derived)
    constexpr uintptr_t kGetPacketProcessor = 0x00BB51D0; // kAppPacketProcessorOffset = 0x1258 (derived)
    constexpr uintptr_t kGetLocalAvatar = 0x00BB53A0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)

    struct Binding { const char* name; unsigned int rva; };
    struct BindingTable { unsigned int rva; const Binding* rows; int count; };
    constexpr Binding kBind0[] = {
        {"_G", 0x016614A0},
        {"package", 0x0166C860},
        {"coroutine", 0x01661B10},
        {"table", 0x01662A80},
        {"io", 0x01664290},
        {"os", 0x01664E80},
        {"string", 0x01668E00},
        {"math", 0x0166A5C0},
        {"utf8", 0x01669760},
        {"debug", 0x0166BA00},
    };
    constexpr Binding kBind1[] = {
        {"assert", 0x01660430},
        {"collectgarbage", 0x01660DE0},
        {"dofile", 0x016603A0},
        {"error", 0x01660AF0},
        {"getmetatable", 0x01660B70},
        {"ipairs", 0x01661160},
        {"loadfile", 0x016611B0},
        {"load", 0x016602A0},
        {"next", 0x01661060},
        {"pairs", 0x016610C0},
        {"pcall", 0x016605D0},
        {"print", 0x01660760},
        {"warn", 0x01660850},
        {"rawequal", 0x01660C80},
        {"rawlen", 0x01660CD0},
        {"rawget", 0x01660D30},
        {"rawset", 0x01660D80},
        {"select", 0x01660510},
        {"setmetatable", 0x01660BD0},
        {"tonumber", 0x01660900},
        {"tostring", 0x01660730},
        {"type", 0x01661000},
        {"xpcall", 0x01660670},
    };
    constexpr Binding kBind2[] = {
        {"create", 0x016615D0},
        {"resume", 0x01661520},
        {"running", 0x016617B0},
        {"status", 0x016616D0},
        {"wrap", 0x01661630},
        {"yield", 0x016616A0},
        {"isyieldable", 0x01661740},
        {"close", 0x016617E0},
    };
    constexpr Binding kBind3[] = {
        {"concat", 0x016620C0},
        {"insert", 0x01661B60},
        {"pack", 0x016622F0},
        {"unpack", 0x016623A0},
        {"remove", 0x01661CF0},
        {"move", 0x01661E70},
        {"sort", 0x01662490},
    };
    constexpr Binding kBind4[] = {
        {"close", 0x01663320},
        {"flush", 0x016630D0},
        {"input", 0x01662AD0},
        {"lines", 0x01662C40},
        {"open", 0x01663410},
        {"output", 0x01662B60},
        {"popen", 0x01663550},
        {"read", 0x01662D60},
        {"tmpfile", 0x01663630},
        {"type", 0x016631E0},
        {"write", 0x01662E30},
    };
    constexpr Binding kBind5[] = {
        {"read", 0x01662DD0},
        {"write", 0x01662EA0},
        {"lines", 0x01662BF0},
        {"flush", 0x01663160},
        {"seek", 0x01662F10},
        {"close", 0x016632B0},
        {"setvbuf", 0x01663000},
    };
    constexpr Binding kBind6[] = {
        {"__gc", 0x016633B0},
        {"__close", 0x016633B0},
        {"__tostring", 0x01663250},
    };
    constexpr Binding kBind7[] = {
        {"clock", 0x01664BF0},
        {"date", 0x016644A0},
        {"difftime", 0x016648B0},
        {"execute", 0x016649F0},
        {"exit", 0x01664970},
        {"getenv", 0x01664BB0},
        {"remove", 0x01664A60},
        {"rename", 0x01664AC0},
        {"setlocale", 0x01664900},
        {"time", 0x01664720},
        {"tmpname", 0x01664B40},
    };
    constexpr Binding kBind8[] = {
        {"byte", 0x016653A0},
        {"char", 0x016654C0},
        {"dump", 0x016655A0},
    };
    constexpr Binding kBind9[] = {
        {"format", 0x01665AD0},
        {"gmatch", 0x01665770},
        {"gsub", 0x01665880},
        {"len", 0x01664ED0},
        {"lower", 0x01665090},
    };
    constexpr Binding kBind10[] = {
        {"rep", 0x01665210},
        {"reverse", 0x01664FF0},
        {"sub", 0x01664F00},
        {"upper", 0x01665150},
        {"pack", 0x01666310},
        {"packsize", 0x016669E0},
        {"unpack", 0x01666B80},
    };
    constexpr Binding kBind11[] = {
        {"offset", 0x01669370},
        {"codepoint", 0x01669040},
        {"char", 0x01669250},
        {"len", 0x01668ED0},
        {"codes", 0x016694F0},
    };
    constexpr Binding kBind12[] = {
        {"abs", 0x016697E0},
        {"acos", 0x01669910},
        {"asin", 0x016698E0},
        {"atan", 0x01669940},
        {"ceil", 0x01669A80},
        {"cos", 0x01669880},
        {"deg", 0x01669E50},
        {"exp", 0x01669E20},
        {"tointeger", 0x016699A0},
        {"floor", 0x01669A00},
        {"fmod", 0x01669B00},
        {"ult", 0x01669D10},
        {"log", 0x01669D60},
        {"max", 0x01669F70},
        {"min", 0x01669ED0},
        {"modf", 0x01669C00},
        {"rad", 0x01669E90},
        {"sin", 0x01669850},
        {"sqrt", 0x01669CD0},
        {"tan", 0x016698B0},
        {"type", 0x0166A010},
    };
    constexpr Binding kBind13[] = {
        {"debug", 0x0166B660},
        {"getuservalue", 0x0166A7C0},
        {"gethook", 0x0166B4E0},
        {"getinfo", 0x0166A8C0},
        {"getlocal", 0x0166AD50},
        {"getregistry", 0x0166A700},
        {"getmetatable", 0x0166A720},
        {"getupvalue", 0x0166B040},
        {"upvaluejoin", 0x0166B1D0},
        {"upvalueid", 0x0166B150},
        {"setuservalue", 0x0166A840},
        {"sethook", 0x0166B2F0},
        {"setlocal", 0x0166AED0},
        {"setmetatable", 0x0166A760},
        {"setupvalue", 0x0166B0C0},
        {"traceback", 0x0166B850},
        {"setcstacklimit", 0x0166B920},
    };
    constexpr Binding kBind14[] = {
        {"CreateContext", 0x01634C20},
        {"LoadFontFace", 0x01634D40},
        {"RegisterTag", 0x01634E80},
    };
    constexpr Binding kBind15[] = {
        {"contexts", 0x01634F80},
        {"key_identifier", 0x01634FC0},
        {"key_modifier", 0x01635000},
    };
    constexpr Binding kBind16[] = {
        {"red", 0x01636D10},
        {"green", 0x01636D60},
        {"blue", 0x01636DB0},
        {"alpha", 0x01636E00},
        {"rgba", 0x01636E50},
    };
    constexpr Binding kBind17[] = {
        {"red", 0x01636ED0},
        {"green", 0x01636F30},
        {"blue", 0x01636F90},
        {"alpha", 0x01636FF0},
        {"rgba", 0x01637050},
    };
    constexpr Binding kBind18[] = {
        {"red", 0x01637720},
        {"green", 0x01637770},
        {"blue", 0x016377C0},
        {"alpha", 0x01637810},
        {"rgba", 0x01637860},
    };
    constexpr Binding kBind19[] = {
        {"red", 0x016378F0},
        {"green", 0x01637960},
        {"blue", 0x016379D0},
        {"alpha", 0x01637A40},
        {"rgba", 0x01637AB0},
    };
    constexpr Binding kBind20[] = {
        {"AddEventListener", 0x01638400},
        {"CreateDocument", 0x01638910},
        {"LoadDocument", 0x01638A20},
        {"Render", 0x01638B10},
        {"UnloadAllDocuments", 0x01638B40},
        {"UnloadDocument", 0x01638B60},
        {"Update", 0x01638BA0},
        {"OpenDataModel", 0x01637FB0},
        {"ProcessMouseMove", 0x01637FF0},
        {"ProcessMouseButtonDown", 0x01638070},
        {"ProcessMouseButtonUp", 0x016380D0},
        {"ProcessMouseWheel", 0x01638130},
        {"ProcessMouseLeave", 0x016381A0},
        {"IsMouseInteracting", 0x016381D0},
        {"ProcessKeyDown", 0x01638200},
        {"ProcessKeyUp", 0x01638260},
        {"ProcessTextInput", 0x016382C0},
    };
    constexpr Binding kBind21[] = {
        {"dimensions", 0x01638BD0},
        {"documents", 0x01638C40},
        {"dp_ratio", 0x01638CB0},
        {"focus_element", 0x01638CF0},
        {"hover_element", 0x01638D50},
        {"name", 0x01638DB0},
        {"root_element", 0x01638E10},
    };
    constexpr Binding kBind22[] = {
        {"PullToFront", 0x01639AE0},
        {"PushToBack", 0x01639B00},
        {"Show", 0x01639B20},
        {"Hide", 0x01639BA0},
        {"Close", 0x01639BC0},
        {"CreateElement", 0x01639BE0},
        {"CreateTextNode", 0x01639D50},
    };
    constexpr Binding kBind23[] = {
        {"AddEventListener", 0x0163A730},
        {"AppendChild", 0x0163A990},
        {"Blur", 0x0163AA90},
        {"Click", 0x0163AAB0},
        {"DispatchEvent", 0x0163AAD0},
        {"Focus", 0x0163B020},
        {"GetAttribute", 0x0163B040},
        {"GetElementById", 0x0163B130},
        {"GetElementsByTagName", 0x0163B220},
        {"QuerySelector", 0x0163B530},
        {"QuerySelectorAll", 0x0163B620},
        {"Matches", 0x0163B930},
        {"HasAttribute", 0x0163BA00},
        {"HasChildNodes", 0x0163BAD0},
        {"InsertBefore", 0x0163BB00},
        {"IsClassSet", 0x0163BC20},
        {"RemoveAttribute", 0x0163BCF0},
        {"RemoveChild", 0x0163BDB0},
        {"ReplaceChild", 0x0163BE20},
        {"ScrollIntoView", 0x0163BF50},
        {"SetAttribute", 0x0163BF80},
        {"SetClass", 0x0163C0F0},
    };
    constexpr Binding kBind24[] = {
        {"attributes", 0x0163C1E0},
        {"child_nodes", 0x0163C250},
        {"class_name", 0x0163C2C0},
        {"client_left", 0x0163C380},
        {"client_height", 0x0163C3E0},
        {"client_top", 0x0163C440},
        {"client_width", 0x0163C4A0},
        {"first_child", 0x0163C500},
        {"id", 0x0163C560},
        {"inner_rml", 0x0163C5C0},
        {"last_child", 0x0163C670},
        {"next_sibling", 0x0163C6D0},
        {"offset_height", 0x0163C730},
        {"offset_left", 0x0163C790},
        {"offset_parent", 0x0163C7F0},
        {"offset_top", 0x0163C850},
        {"offset_width", 0x0163C8B0},
        {"owner_document", 0x0163C910},
        {"parent_node", 0x0163C970},
        {"previous_sibling", 0x0163C9D0},
        {"scroll_height", 0x0163CA30},
        {"scroll_left", 0x0163CA90},
        {"scroll_top", 0x0163CAF0},
        {"scroll_width", 0x0163CB50},
        {"style", 0x0163CBB0},
        {"tag_name", 0x0163CC20},
    };
    constexpr Binding kBind25[] = {
        {"class_name", 0x0163CC80},
        {"id", 0x0163CD70},
        {"inner_rml", 0x0163CE60},
        {"scroll_left", 0x0163CF60},
        {"scroll_top", 0x0163CFD0},
    };
    constexpr Binding kBind26[] = {
        {"current_element", 0x0163EF80},
        {"type", 0x0163EFE0},
        {"target_element", 0x0163F1C0},
        {"parameters", 0x0163F220},
    };
    constexpr Binding kBind27[] = {
        {"DotProduct", 0x0163FFB0},
        {"Normalise", 0x01640020},
        {"Rotate", 0x016400D0},
    };
    constexpr Binding kBind28[] = {
        {"x", 0x016401A0},
        {"y", 0x016401F0},
        {"magnitude", 0x01640240},
    };
    constexpr Binding kBind29[] = {
        {"x", 0x01640AA0},
        {"y", 0x01640AF0},
        {"magnitude", 0x01640B40},
    };
    constexpr Binding kBind30[] = {
        {"disabled", 0x01641670},
        {"name", 0x016416C0},
        {"value", 0x01641770},
    };
    constexpr Binding kBind31[] = {
        {"disabled", 0x01641830},
        {"name", 0x016418A0},
        {"value", 0x01641990},
    };
    constexpr Binding kBind32[] = {
        {"Select", 0x01641DE0},
        {"SetSelection", 0x01641E00},
        {"GetSelection", 0x01641E50},
    };
    constexpr Binding kBind33[] = {
        {"checked", 0x01641F30},
        {"maxlength", 0x01642020},
        {"size", 0x01642120},
        {"max", 0x01642210},
        {"min", 0x01642300},
        {"step", 0x016423F0},
    };
    constexpr Binding kBind34[] = {
        {"checked", 0x016424E0},
        {"maxlength", 0x01642640},
        {"size", 0x01642740},
        {"max", 0x01642830},
        {"min", 0x01642930},
        {"step", 0x01642A30},
    };
    constexpr Binding kBind35[] = {
        {"Add", 0x01643010},
        {"Remove", 0x016431C0},
        {"RemoveAll", 0x01643310},
    };
    constexpr Binding kBind36[] = {
        {"Select", 0x01643870},
        {"SetSelection", 0x01643890},
        {"GetSelection", 0x016438E0},
    };
    constexpr Binding kBind37[] = {
        {"cols", 0x016439C0},
        {"maxlength", 0x01643A10},
        {"rows", 0x01643A60},
        {"wordwrap", 0x01643AB0},
    };
    constexpr Binding kBind38[] = {
        {"cols", 0x01643B00},
        {"maxlength", 0x01643B60},
        {"rows", 0x01643BC0},
        {"wordwrap", 0x01643C20},
    };
    constexpr BindingTable kBindingTables[] = {
        {0x0201FFE0, kBind0, 10},
        {0x02020C80, kBind1, 23},
        {0x020210B0, kBind2, 8},
        {0x020212B0, kBind3, 7},
        {0x02021440, kBind4, 11},
        {0x02021500, kBind5, 7},
        {0x02021590, kBind6, 3},
        {0x02021900, kBind7, 11},
        {0x02021B90, kBind8, 3},
        {0x02021BD0, kBind9, 5},
        {0x02021C30, kBind10, 7},
        {0x02022280, kBind11, 5},
        {0x020223A0, kBind12, 21},
        {0x02022620, kBind13, 17},
        {0x024E19E0, kBind14, 3},
        {0x024E1A20, kBind15, 3},
        {0x024E1A60, kBind16, 5},
        {0x024E1AC0, kBind17, 5},
        {0x024E1B20, kBind18, 5},
        {0x024E1B80, kBind19, 5},
        {0x024E1BE0, kBind20, 17},
        {0x024E1D00, kBind21, 7},
        {0x024E1DD0, kBind22, 7},
        {0x024E1EA0, kBind23, 22},
        {0x024E2010, kBind24, 26},
        {0x024E21C0, kBind25, 5},
        {0x024E22F0, kBind26, 4},
        {0x024E2340, kBind27, 3},
        {0x024E2380, kBind28, 3},
        {0x024E23F0, kBind29, 3},
        {0x024E2480, kBind30, 3},
        {0x024E24C0, kBind31, 3},
        {0x024E2500, kBind32, 3},
        {0x024E2540, kBind33, 6},
        {0x024E25B0, kBind34, 6},
        {0x024E2620, kBind35, 3},
        {0x024E26B0, kBind36, 3},
        {0x024E26F0, kBind37, 4},
        {0x024E2740, kBind38, 4},
    };
}
