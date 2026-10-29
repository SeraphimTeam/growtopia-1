// Growtopia x64 offsets - generated 2026-10-29 11:56:58Z
public static class Offsets {
    public const Int64 SendPacket = 0xC3FDA0; // SendPacket(int type, std::string* text, ENetPeer* peer) - pr
    public const Int64 SendPacketRaw = 0xC3FEC0; // SendPacketRaw(int type, void* data, int len, ENetPeer* peer,
    public const Int64 ProcessTankUpdatePacket = 0xB3A840; // incoming PACKET_* dispatcher
    public const Int64 VariantListSerializeFromMem = 0x127D890; // VariantList::SerializeFromMem
    public const Int64 PacketTypeDispatcher = 0xA0AB70; // 
    public const Int64 PacketLengthValidator = 0xC3CE30; // 
    public const Int64 TrackPacketSender = 0xB6FDF0; // 
    public const Int64 ENetHostConnectSetup = 0xA0A750; // 
    public const Int64 PlayerItems_AddItem = 0xC44D00; // 
    public const Int64 PlayerItems_HaveRoomForItem = 0xC45E90; // 
    public const Int64 PlayerItems_RemoveItem = 0xC47610; // 
    public const Int64 InventoryIllegalItemPurge = 0xC47760; // 
    public const Int64 ItemsDatLoader = 0xC5BC20; // 
    public const Int64 ItemValidator = 0xC5B6C0; // 
    public const Int64 ItemHashCheck = 0xC2D350; // 
    public const Int64 ItemSurfaceRender = 0xA3C020; // 
    public const Int64 ChooseVisual = 0xC7C080; // 
    public const Int64 World_Load = 0x143B040; // 
    public const Int64 WorldVersionCheck = 0xB3A840; // 
    public const Int64 TileExtraParser = 0xC6D550; // 
    public const Int64 WhiteDoorLookup = 0x143A840; // 
    public const Int64 TilesheetLoader = 0xA2B260; // 
    public const Int64 BgItemMapValidator = 0xC5C460; // 
    public const Int64 NetAvatar_OnAvatarBePaintBalled = 0xAE3850; // 
    public const Int64 PunchHackDetector = 0xAE8350; // 
    public const Int64 PunchNoTileHandler = 0x9A8AE0; // 
    public const Int64 HarvestInteraction = 0xA13860; // 
    public const Int64 CameraManager = 0xA27690; // 
    public const Int64 DialogBuilder = 0xCF8C50; // 
    public const Int64 BannerDialogBuilder = 0xD75770; // 
    public const Int64 EnableAllButtonsEntity = 0x11D6C60; // 
    public const Int64 Controller_PushController = 0xD8A3A0; // 
    public const Int64 Controller_PopController = 0xD8A180; // 
    public const Int64 Controller_PushChildController = 0x10829E0; // 
    public const Int64 Controller_OnActivate = 0xDC57E0; // 
    public const Int64 Controller_Deactivate = 0xDC5420; // 
    public const Int64 Controller_Release = 0x97E140; // 
    public const Int64 UIController_OnActivate = 0x10D7A00; // 
    public const Int64 UIController_OnDeactivate = 0x10D7FF0; // 
    public const Int64 UIController_RemoveScreenView = 0x10D8270; // 
    public const Int64 ParticleEmitter_GetPaintballColor = 0xE14960; // 
    public const Int64 RTFont_GetColorFromString = 0xD63040; // 
    public const Int64 ResourceManager_GetSurfaceResource = 0x1244940; // 
    public const Int64 VideoModeManager_SetVideoMode = 0xDB4C30; // 
    public const Int64 VideoModeManager_SetFullscreen = 0xDB4540; // 
    public const Int64 VideoModeManager_AddVideoMode = 0xDB1E70; // self-naming anchor: AddVideoMode logs its own name once; a 5
    public const Int64 VideoModeManager_GetCustomVideoModes = 0xDB2430; // 
    public const Int64 VideoModeManager_OnWMSize = 0xDB4610; // 
    public const Int64 IAPManager_LoadCurrenciesConfig = 0x119C350; // 
    public const Int64 IAPManager_ctor = 0x11A8670; // 
    public const Int64 App_Kill = 0x97D080; // 
    public const Int64 StoreBuyPacketPath = 0xD71550; // 
    public const Int64 TileCoordinateHandler = 0x9A7090; // 
    public const Int64 LogDisplayEntityBuilder = 0x11DA850; // NOT LogToConsole: the sole owner of this string also refs Ge
    public const Int64 ItemRendererXmlLoader = 0xFC9190; // parses GameData/ItemRenderers/*.xml: ItemRenderer/StateMachi
    public const Int64 BattlePetConfigLoader = 0xBC7880; // 
    public const Int64 OwlsOfAthenaPets_RenderPet = 0x76F3C0; // 
    public const Int64 Flying2Pets_RenderPet = 0x8E52E0; // 
    public const Int64 Scepter_RenderPet = 0x6979E0; // 
    public const Int64 OwlsOfAthenaPets_OnRespawned = 0x75A4B0; // 
    public const Int64 Flying2Pets_OnRespawned = 0x8CFEF0; // 
    public const Int64 FactionIconLoader = 0xADDE50; // 
    public const Int64 TextOverlayActionHandler = 0xB372A0; // msg|/file|/imageFile|/delayMS| overlay+audio handler
    public const Int64 InventoryTabUI = 0x10A6130; // growid|/tabblocks|/tabseeds|/taball| inventory tabs
    public const Int64 CaptchaInputDialog = 0xD080A0; // 
    public const Int64 WorldTileMap = 0xC83920; // the tile-map container: dimensions + tile count
    public const Int64 TileLookupGuard = 0x9BE4A0; // tile lookup / punch target resolution
    public const Int64 TilesheetPageLoader = 0xD0A450; // tile sheet texture loader
    public const Int64 WorldValidation = 0x10EE4A0; // world validation pass
    public const Int64 WeaponDamageTierText = 0xC0A1C0; // weapon damage tier description
    public const Int64 GrowtorialButton = 0xCBE010; // 
    public const Int64 WorldLockText = 0xAEF6C0; // 
    public const Int64 SeedTreeItemPath = 0xCE8A90; // 
    public const Int64 TileDefinitionsLoader = 0xC28820; // 
    public const Int64 WeatherEffectText = 0xC01910; // 
    public const Int64 ItemEffectVariantDispatcher = 0xAFA150; // second On* dispatcher (43 handlers): item/cosmetic effect va
    public const Int64 OnDeathEquipTagHandler = 0xFCFB00; // also OnEquipTag; death + equip-tag handling
    public const Int64 OnDisconnectedHandler = 0xB30010; // 
    public const Int64 OnErrorFinishHandler = 0xA69D70; // also OnFinish
    public const Int64 OnOverMoveHandler = 0x11B3390; // also OnOverEnd; hover/drag move
    public const Int64 OnEventHandler = 0x1060F80; // 
    public const Int64 OnRenderHandler = 0x1223AA0; // 
    public const Int64 OnFakeScrollToEntity = 0x1215AD0; // 
    public const Int64 OnButtonSelectedHandler = 0xD0DCF0; // 
    public const Int64 TradeHandler = 0xD84B00; // 
    public const Int64 TradeOtherPlayerGuard = 0xD833C0; // 
    public const Int64 PartyMemberHandler = 0xD49400; // 
    public const Int64 StateMachineTransitions = 0x1029430; // item-renderer state-machine transitions
    public const Int64 AnimCurveKeyFrameParser = 0x10053B0; // animation curve/keyframe parser
    public const Int64 SpriteAnimStateParser = 0x100C350; // sprite animation: playOnState/isLoop
    public const Int64 AnimTimeParser = 0x1006EA0; // 
    public const Int64 ParticleEmitterParser = 0xE14960; // particle emitter definitions
    public const Int64 RendererConditionParser = 0x102B870; // state-machine <Condition> evaluation
    public const Int64 SpriteRenderParser = 0x8D5AB0; // 
    public const Int64 LoginPacketBuilder = 0xDC7B20; // 
    public const Int64 TileActionBuilder = 0xAEA7C0; // 
    public const Int64 DialogButtonBuilder = 0x10E6DF0; // 
    public const Int64 NetAvatarSpawnHandler = 0xB35790; // 
    public const Int64 GameUpdatePacketSerializer = 0xA0CCA0; // 
    public const Int64 NetAvatarNetIDEmitter = 0xB32820; // 
    public const Int64 IAPPurchaseValidation = 0xD1E520; // 
    public const Int64 OnVariantDispatcher = 0xB299A0; // 
    public const Int64 PunchAction = 0xDE2E70; // 
    public const Int64 GetApp = 0x979C80; // leaf without unwind data; not a .pdata entry
    public const Int64 GetClient = 0xA0A730; // kAppClientOffset = 0xAD0 (derived)
    public const Int64 GetPacketProcessor = 0xB24550; // kAppPacketProcessorOffset = 0x1218 (derived)
    public const Int64 GetLocalAvatar = 0xB248B0; // kPacketProcessorLocalAvatarOffset = 0x1D0 (derived)
    public const Int64 ConstsArray = 0x22E3E80; // entry = [A,0,B,C]; value = 2A-B = B-C
    public static readonly (uint Table, string Name, uint Rva)[] Bindings = {
        (0x01DA2940, "_G", 0x015C2450),
        (0x01DA2940, "package", 0x015CD810),
        (0x01DA2940, "coroutine", 0x015C2AC0),
        (0x01DA2940, "table", 0x015C3A30),
        (0x01DA2940, "io", 0x015C5240),
        (0x01DA2940, "os", 0x015C5E30),
        (0x01DA2940, "string", 0x015C9DB0),
        (0x01DA2940, "math", 0x015CB570),
        (0x01DA2940, "utf8", 0x015CA710),
        (0x01DA2940, "debug", 0x015CC9B0),
        (0x01DA35E0, "assert", 0x015C13E0),
        (0x01DA35E0, "collectgarbage", 0x015C1D90),
        (0x01DA35E0, "dofile", 0x015C1350),
        (0x01DA35E0, "error", 0x015C1AA0),
        (0x01DA35E0, "getmetatable", 0x015C1B20),
        (0x01DA35E0, "ipairs", 0x015C2110),
        (0x01DA35E0, "loadfile", 0x015C2160),
        (0x01DA35E0, "load", 0x015C1250),
        (0x01DA35E0, "next", 0x015C2010),
        (0x01DA35E0, "pairs", 0x015C2070),
        (0x01DA35E0, "pcall", 0x015C1580),
        (0x01DA35E0, "print", 0x015C1710),
        (0x01DA35E0, "warn", 0x015C1800),
        (0x01DA35E0, "rawequal", 0x015C1C30),
        (0x01DA35E0, "rawlen", 0x015C1C80),
        (0x01DA35E0, "rawget", 0x015C1CE0),
        (0x01DA35E0, "rawset", 0x015C1D30),
        (0x01DA35E0, "select", 0x015C14C0),
        (0x01DA35E0, "setmetatable", 0x015C1B80),
        (0x01DA35E0, "tonumber", 0x015C18B0),
        (0x01DA35E0, "tostring", 0x015C16E0),
        (0x01DA35E0, "type", 0x015C1FB0),
        (0x01DA35E0, "xpcall", 0x015C1620),
        (0x01DA3A10, "create", 0x015C2580),
        (0x01DA3A10, "resume", 0x015C24D0),
        (0x01DA3A10, "running", 0x015C2760),
        (0x01DA3A10, "status", 0x015C2680),
        (0x01DA3A10, "wrap", 0x015C25E0),
        (0x01DA3A10, "yield", 0x015C2650),
        (0x01DA3A10, "isyieldable", 0x015C26F0),
        (0x01DA3A10, "close", 0x015C2790),
        (0x01DA3C10, "concat", 0x015C3070),
        (0x01DA3C10, "insert", 0x015C2B10),
        (0x01DA3C10, "pack", 0x015C32A0),
        (0x01DA3C10, "unpack", 0x015C3350),
        (0x01DA3C10, "remove", 0x015C2CA0),
        (0x01DA3C10, "move", 0x015C2E20),
        (0x01DA3C10, "sort", 0x015C3440),
        (0x01DA3DA0, "close", 0x015C42D0),
        (0x01DA3DA0, "flush", 0x015C4080),
        (0x01DA3DA0, "input", 0x015C3A80),
        (0x01DA3DA0, "lines", 0x015C3BF0),
        (0x01DA3DA0, "open", 0x015C43C0),
        (0x01DA3DA0, "output", 0x015C3B10),
        (0x01DA3DA0, "popen", 0x015C4500),
        (0x01DA3DA0, "read", 0x015C3D10),
        (0x01DA3DA0, "tmpfile", 0x015C45E0),
        (0x01DA3DA0, "type", 0x015C4190),
        (0x01DA3DA0, "write", 0x015C3DE0),
        (0x01DA3E60, "read", 0x015C3D80),
        (0x01DA3E60, "write", 0x015C3E50),
        (0x01DA3E60, "lines", 0x015C3BA0),
        (0x01DA3E60, "flush", 0x015C4110),
        (0x01DA3E60, "seek", 0x015C3EC0),
        (0x01DA3E60, "close", 0x015C4260),
        (0x01DA3E60, "setvbuf", 0x015C3FB0),
        (0x01DA3EF0, "__gc", 0x015C4360),
        (0x01DA3EF0, "__close", 0x015C4360),
        (0x01DA3EF0, "__tostring", 0x015C4200),
        (0x01DA4260, "clock", 0x015C5BA0),
        (0x01DA4260, "date", 0x015C5450),
        (0x01DA4260, "difftime", 0x015C5860),
        (0x01DA4260, "execute", 0x015C59A0),
        (0x01DA4260, "exit", 0x015C5920),
        (0x01DA4260, "getenv", 0x015C5B60),
        (0x01DA4260, "remove", 0x015C5A10),
        (0x01DA4260, "rename", 0x015C5A70),
        (0x01DA4260, "setlocale", 0x015C58B0),
        (0x01DA4260, "time", 0x015C56D0),
        (0x01DA4260, "tmpname", 0x015C5AF0),
        (0x01DA44F0, "byte", 0x015C6350),
        (0x01DA44F0, "char", 0x015C6470),
        (0x01DA44F0, "dump", 0x015C6550),
        (0x01DA4530, "format", 0x015C6A80),
        (0x01DA4530, "gmatch", 0x015C6720),
        (0x01DA4530, "gsub", 0x015C6830),
        (0x01DA4530, "len", 0x015C5E80),
        (0x01DA4530, "lower", 0x015C6040),
        (0x01DA4590, "rep", 0x015C61C0),
        (0x01DA4590, "reverse", 0x015C5FA0),
        (0x01DA4590, "sub", 0x015C5EB0),
        (0x01DA4590, "upper", 0x015C6100),
        (0x01DA4590, "pack", 0x015C72C0),
        (0x01DA4590, "packsize", 0x015C7990),
        (0x01DA4590, "unpack", 0x015C7B30),
        (0x01DA4BE0, "offset", 0x015CA320),
        (0x01DA4BE0, "codepoint", 0x015C9FF0),
        (0x01DA4BE0, "char", 0x015CA200),
        (0x01DA4BE0, "len", 0x015C9E80),
        (0x01DA4BE0, "codes", 0x015CA4A0),
        (0x01DA4D00, "abs", 0x015CA790),
        (0x01DA4D00, "acos", 0x015CA8C0),
        (0x01DA4D00, "asin", 0x015CA890),
        (0x01DA4D00, "atan", 0x015CA8F0),
        (0x01DA4D00, "ceil", 0x015CAA30),
        (0x01DA4D00, "cos", 0x015CA830),
        (0x01DA4D00, "deg", 0x015CAE00),
        (0x01DA4D00, "exp", 0x015CADD0),
        (0x01DA4D00, "tointeger", 0x015CA950),
        (0x01DA4D00, "floor", 0x015CA9B0),
        (0x01DA4D00, "fmod", 0x015CAAB0),
        (0x01DA4D00, "ult", 0x015CACC0),
        (0x01DA4D00, "log", 0x015CAD10),
        (0x01DA4D00, "max", 0x015CAF20),
        (0x01DA4D00, "min", 0x015CAE80),
        (0x01DA4D00, "modf", 0x015CABB0),
        (0x01DA4D00, "rad", 0x015CAE40),
        (0x01DA4D00, "sin", 0x015CA800),
        (0x01DA4D00, "sqrt", 0x015CAC80),
        (0x01DA4D00, "tan", 0x015CA860),
        (0x01DA4D00, "type", 0x015CAFC0),
        (0x01DA4F80, "debug", 0x015CC610),
        (0x01DA4F80, "getuservalue", 0x015CB770),
        (0x01DA4F80, "gethook", 0x015CC490),
        (0x01DA4F80, "getinfo", 0x015CB870),
        (0x01DA4F80, "getlocal", 0x015CBD00),
        (0x01DA4F80, "getregistry", 0x015CB6B0),
        (0x01DA4F80, "getmetatable", 0x015CB6D0),
        (0x01DA4F80, "getupvalue", 0x015CBFF0),
        (0x01DA4F80, "upvaluejoin", 0x015CC180),
        (0x01DA4F80, "upvalueid", 0x015CC100),
        (0x01DA4F80, "setuservalue", 0x015CB7F0),
        (0x01DA4F80, "sethook", 0x015CC2A0),
        (0x01DA4F80, "setlocal", 0x015CBE80),
        (0x01DA4F80, "setmetatable", 0x015CB710),
        (0x01DA4F80, "setupvalue", 0x015CC070),
        (0x01DA4F80, "traceback", 0x015CC800),
        (0x01DA4F80, "setcstacklimit", 0x015CC8D0),
        (0x02220860, "CreateContext", 0x01595BD0),
        (0x02220860, "LoadFontFace", 0x01595CF0),
        (0x02220860, "RegisterTag", 0x01595E30),
        (0x022208A0, "contexts", 0x01595F30),
        (0x022208A0, "key_identifier", 0x01595F70),
        (0x022208A0, "key_modifier", 0x01595FB0),
        (0x022208E0, "red", 0x01597CC0),
        (0x022208E0, "green", 0x01597D10),
        (0x022208E0, "blue", 0x01597D60),
        (0x022208E0, "alpha", 0x01597DB0),
        (0x022208E0, "rgba", 0x01597E00),
        (0x02220940, "red", 0x01597E80),
        (0x02220940, "green", 0x01597EE0),
        (0x02220940, "blue", 0x01597F40),
        (0x02220940, "alpha", 0x01597FA0),
        (0x02220940, "rgba", 0x01598000),
        (0x022209A0, "red", 0x015986D0),
        (0x022209A0, "green", 0x01598720),
        (0x022209A0, "blue", 0x01598770),
        (0x022209A0, "alpha", 0x015987C0),
        (0x022209A0, "rgba", 0x01598810),
        (0x02220A00, "red", 0x015988A0),
        (0x02220A00, "green", 0x01598910),
        (0x02220A00, "blue", 0x01598980),
        (0x02220A00, "alpha", 0x015989F0),
        (0x02220A00, "rgba", 0x01598A60),
        (0x02220A60, "AddEventListener", 0x015993B0),
        (0x02220A60, "CreateDocument", 0x015998C0),
        (0x02220A60, "LoadDocument", 0x015999D0),
        (0x02220A60, "Render", 0x01599AC0),
        (0x02220A60, "UnloadAllDocuments", 0x01599AF0),
        (0x02220A60, "UnloadDocument", 0x01599B10),
        (0x02220A60, "Update", 0x01599B50),
        (0x02220A60, "OpenDataModel", 0x01598F60),
        (0x02220A60, "ProcessMouseMove", 0x01598FA0),
        (0x02220A60, "ProcessMouseButtonDown", 0x01599020),
        (0x02220A60, "ProcessMouseButtonUp", 0x01599080),
        (0x02220A60, "ProcessMouseWheel", 0x015990E0),
        (0x02220A60, "ProcessMouseLeave", 0x01599150),
        (0x02220A60, "IsMouseInteracting", 0x01599180),
        (0x02220A60, "ProcessKeyDown", 0x015991B0),
        (0x02220A60, "ProcessKeyUp", 0x01599210),
        (0x02220A60, "ProcessTextInput", 0x01599270),
        (0x02220B80, "dimensions", 0x01599B80),
        (0x02220B80, "documents", 0x01599BF0),
        (0x02220B80, "dp_ratio", 0x01599C60),
        (0x02220B80, "focus_element", 0x01599CA0),
        (0x02220B80, "hover_element", 0x01599D00),
        (0x02220B80, "name", 0x01599D60),
        (0x02220B80, "root_element", 0x01599DC0),
        (0x02220C50, "PullToFront", 0x0159AA90),
        (0x02220C50, "PushToBack", 0x0159AAB0),
        (0x02220C50, "Show", 0x0159AAD0),
        (0x02220C50, "Hide", 0x0159AB50),
        (0x02220C50, "Close", 0x0159AB70),
        (0x02220C50, "CreateElement", 0x0159AB90),
        (0x02220C50, "CreateTextNode", 0x0159AD00),
        (0x02220D20, "AddEventListener", 0x0159B6E0),
        (0x02220D20, "AppendChild", 0x0159B940),
        (0x02220D20, "Blur", 0x0159BA40),
        (0x02220D20, "Click", 0x0159BA60),
        (0x02220D20, "DispatchEvent", 0x0159BA80),
        (0x02220D20, "Focus", 0x0159BFD0),
        (0x02220D20, "GetAttribute", 0x0159BFF0),
        (0x02220D20, "GetElementById", 0x0159C0E0),
        (0x02220D20, "GetElementsByTagName", 0x0159C1D0),
        (0x02220D20, "QuerySelector", 0x0159C4E0),
        (0x02220D20, "QuerySelectorAll", 0x0159C5D0),
        (0x02220D20, "Matches", 0x0159C8E0),
        (0x02220D20, "HasAttribute", 0x0159C9B0),
        (0x02220D20, "HasChildNodes", 0x0159CA80),
        (0x02220D20, "InsertBefore", 0x0159CAB0),
        (0x02220D20, "IsClassSet", 0x0159CBD0),
        (0x02220D20, "RemoveAttribute", 0x0159CCA0),
        (0x02220D20, "RemoveChild", 0x0159CD60),
        (0x02220D20, "ReplaceChild", 0x0159CDD0),
        (0x02220D20, "ScrollIntoView", 0x0159CF00),
        (0x02220D20, "SetAttribute", 0x0159CF30),
        (0x02220D20, "SetClass", 0x0159D0A0),
        (0x02220E90, "attributes", 0x0159D190),
        (0x02220E90, "child_nodes", 0x0159D200),
        (0x02220E90, "class_name", 0x0159D270),
        (0x02220E90, "client_left", 0x0159D330),
        (0x02220E90, "client_height", 0x0159D390),
        (0x02220E90, "client_top", 0x0159D3F0),
        (0x02220E90, "client_width", 0x0159D450),
        (0x02220E90, "first_child", 0x0159D4B0),
        (0x02220E90, "id", 0x0159D510),
        (0x02220E90, "inner_rml", 0x0159D570),
        (0x02220E90, "last_child", 0x0159D620),
        (0x02220E90, "next_sibling", 0x0159D680),
        (0x02220E90, "offset_height", 0x0159D6E0),
        (0x02220E90, "offset_left", 0x0159D740),
        (0x02220E90, "offset_parent", 0x0159D7A0),
        (0x02220E90, "offset_top", 0x0159D800),
        (0x02220E90, "offset_width", 0x0159D860),
        (0x02220E90, "owner_document", 0x0159D8C0),
        (0x02220E90, "parent_node", 0x0159D920),
        (0x02220E90, "previous_sibling", 0x0159D980),
        (0x02220E90, "scroll_height", 0x0159D9E0),
        (0x02220E90, "scroll_left", 0x0159DA40),
        (0x02220E90, "scroll_top", 0x0159DAA0),
        (0x02220E90, "scroll_width", 0x0159DB00),
        (0x02220E90, "style", 0x0159DB60),
        (0x02220E90, "tag_name", 0x0159DBD0),
        (0x02221040, "class_name", 0x0159DC30),
        (0x02221040, "id", 0x0159DD20),
        (0x02221040, "inner_rml", 0x0159DE10),
        (0x02221040, "scroll_left", 0x0159DF10),
        (0x02221040, "scroll_top", 0x0159DF80),
        (0x02221170, "current_element", 0x0159FF30),
        (0x02221170, "type", 0x0159FF90),
        (0x02221170, "target_element", 0x015A0170),
        (0x02221170, "parameters", 0x015A01D0),
        (0x022211C0, "DotProduct", 0x015A0F60),
        (0x022211C0, "Normalise", 0x015A0FD0),
        (0x022211C0, "Rotate", 0x015A1080),
        (0x02221200, "x", 0x015A1150),
        (0x02221200, "y", 0x015A11A0),
        (0x02221200, "magnitude", 0x015A11F0),
        (0x02221270, "x", 0x015A1A50),
        (0x02221270, "y", 0x015A1AA0),
        (0x02221270, "magnitude", 0x015A1AF0),
        (0x02221300, "disabled", 0x015A2620),
        (0x02221300, "name", 0x015A2670),
        (0x02221300, "value", 0x015A2720),
        (0x02221340, "disabled", 0x015A27E0),
        (0x02221340, "name", 0x015A2850),
        (0x02221340, "value", 0x015A2940),
        (0x02221380, "Select", 0x015A2D90),
        (0x02221380, "SetSelection", 0x015A2DB0),
        (0x02221380, "GetSelection", 0x015A2E00),
        (0x022213C0, "checked", 0x015A2EE0),
        (0x022213C0, "maxlength", 0x015A2FD0),
        (0x022213C0, "size", 0x015A30D0),
        (0x022213C0, "max", 0x015A31C0),
        (0x022213C0, "min", 0x015A32B0),
        (0x022213C0, "step", 0x015A33A0),
        (0x02221430, "checked", 0x015A3490),
        (0x02221430, "maxlength", 0x015A35F0),
        (0x02221430, "size", 0x015A36F0),
        (0x02221430, "max", 0x015A37E0),
        (0x02221430, "min", 0x015A38E0),
        (0x02221430, "step", 0x015A39E0),
        (0x022214A0, "Add", 0x015A3FC0),
        (0x022214A0, "Remove", 0x015A4170),
        (0x022214A0, "RemoveAll", 0x015A42C0),
        (0x02221530, "Select", 0x015A4820),
        (0x02221530, "SetSelection", 0x015A4840),
        (0x02221530, "GetSelection", 0x015A4890),
        (0x02221570, "cols", 0x015A4970),
        (0x02221570, "maxlength", 0x015A49C0),
        (0x02221570, "rows", 0x015A4A10),
        (0x02221570, "wordwrap", 0x015A4A60),
        (0x022215C0, "cols", 0x015A4AB0),
        (0x022215C0, "maxlength", 0x015A4B10),
        (0x022215C0, "rows", 0x015A4B70),
        (0x022215C0, "wordwrap", 0x015A4BD0),
    };
}
