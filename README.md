# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.58 | `09242684` | 2026-09-24 06:21:07 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01E30408` |
| SHA-256 | `7a6473bfe4d4d709b303986b2896676ba6400fae771b946d15d0c0f65dc4eea6` |
| functions in `.pdata` | 80018 |
| generated | 2026-10-04 11:29:49Z |

| Status | Count | Meaning |
| ------ | ----: | ------- |
| VERIFIED | 403 | Address is a `.pdata` function start in the executable `.text` segment |
| CHECK | 2 | Resolved but did not satisfy every check |
| UNRESOLVED | 1 | No single owner found for the anchor |

**Total functions/methods documented:** `405`

---

## Part 1 - Engine & gameplay functions (anchor-string resolution)

| Category | Function | Offset (RVA) | Size | Status | Anchor string / evidence |
| -------- | -------- | ------------ | ---: | ------ | ------------------------ |
| anticheat | `PunchHackDetector` | `0x00AF4690` | 3334 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x00985380` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x00988820` | 466 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A16690` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00B2DE10` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00B2DFE0` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00A335F0` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x009B4FF0` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A1F7C0` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C11CE0` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00DE6120` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x00FDBE60` | 8898 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00D23720` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00D74050` | 8562 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x011A92E0` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x011B5410` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x008E0810` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00D65360` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E17C60` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E17C60` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x01011710` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x01013200` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x010186B0` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x010357B0` | 3532 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x01037BF0` | 809 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x01234350` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x012551F0` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00DB4F70` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00DB5530` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00DB7640` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00DB7710` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00DB7D30` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00A47F80` | 40035 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00C34940` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00C4C200` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00C4D390` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00C4EB10` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00C4EC60` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00C62BC0` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00C63120` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00C83580` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A166B0` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A16AD0` | 1360 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A18C00` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00A75CD0` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00AF6B00` | 2289 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00B39740` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00B43C90` | 17860 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00B78EE0` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00C44390` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00C47300` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00C47420` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00DCAC10` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x010F5680` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x0128D930` | 860 | VERIFIED | `unknown var type` |
| net | `AuthClient_Login` | `0x016C20D0` | 6320 | VERIFIED | `AuthenticationClient::login with PlayerCredentials` |
| pets | `Scepter_RenderPet` | `0x006A2790` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x00765250` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x0077A160` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x008DAC50` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x008F0040` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00BCF3A0` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x00FD54F0` | 11502 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00AEA1D0` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00AEFB90` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00B3BF50` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00B3EAD0` | 3665 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| player | `PlayerProgression` | `0x016ACDA0` | 1056 | VERIFIED | `player.progression.%s` |
| trade | `TradeOtherPlayerGuard` | `0x00D864C0` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00D87C00` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x00989880` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00B04610` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00B330D0` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00B405E0` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00CC2FB0` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `DialogBuilder` | `0x00CFDDF0` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D0D240` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `OnButtonSelectedHandler` | `0x00D12EF0` | 4497 | VERIFIED | `OnButtonSelected` |
| ui | `BannerDialogBuilder` | `0x00D77D80` | 12770 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00D8D280` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00D8D4A0` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00DC8510` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00DC88D0` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x0106CF80` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x010924B0` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x010B54A0` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x010E6760` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x010E6D50` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x010E6FD0` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x011C0140` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x011E3A10` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x011E7600` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x01226380` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| ui | `OnDeleteHandler` | `0x01718150` | 1273 | VERIFIED | `OnDelete` |
| world | `TileCoordinateHandler` | `0x009B35A0` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x009CA9B0` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00A371C0` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00AFBA00` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00B43C90` | 17860 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00C09430` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00C2FEB0` | 15673 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00C63960` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00C74A50` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00C8AE20` | 1204 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00CEDC30` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D0F5F0` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x010FCD20` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x0145F7E0` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x0145FFE0` | 1095 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x01FADC80` | `_G` | `0x015E76F0` |
| `0x01FADC80` | `package` | `0x015F2AB0` |
| `0x01FADC80` | `coroutine` | `0x015E7D60` |
| `0x01FADC80` | `table` | `0x015E8CD0` |
| `0x01FADC80` | `io` | `0x015EA4E0` |
| `0x01FADC80` | `os` | `0x015EB0D0` |
| `0x01FADC80` | `string` | `0x015EF050` |
| `0x01FADC80` | `math` | `0x015F0810` |
| `0x01FADC80` | `utf8` | `0x015EF9B0` |
| `0x01FADC80` | `debug` | `0x015F1C50` |
| `0x01FAE920` | `assert` | `0x015E6680` |
| `0x01FAE920` | `collectgarbage` | `0x015E7030` |
| `0x01FAE920` | `dofile` | `0x015E65F0` |
| `0x01FAE920` | `error` | `0x015E6D40` |
| `0x01FAE920` | `getmetatable` | `0x015E6DC0` |
| `0x01FAE920` | `ipairs` | `0x015E73B0` |
| `0x01FAE920` | `loadfile` | `0x015E7400` |
| `0x01FAE920` | `load` | `0x015E64F0` |
| `0x01FAE920` | `next` | `0x015E72B0` |
| `0x01FAE920` | `pairs` | `0x015E7310` |
| `0x01FAE920` | `pcall` | `0x015E6820` |
| `0x01FAE920` | `print` | `0x015E69B0` |
| `0x01FAE920` | `warn` | `0x015E6AA0` |
| `0x01FAE920` | `rawequal` | `0x015E6ED0` |
| `0x01FAE920` | `rawlen` | `0x015E6F20` |
| `0x01FAE920` | `rawget` | `0x015E6F80` |
| `0x01FAE920` | `rawset` | `0x015E6FD0` |
| `0x01FAE920` | `select` | `0x015E6760` |
| `0x01FAE920` | `setmetatable` | `0x015E6E20` |
| `0x01FAE920` | `tonumber` | `0x015E6B50` |
| `0x01FAE920` | `tostring` | `0x015E6980` |
| `0x01FAE920` | `type` | `0x015E7250` |
| `0x01FAE920` | `xpcall` | `0x015E68C0` |
| `0x01FAED50` | `create` | `0x015E7820` |
| `0x01FAED50` | `resume` | `0x015E7770` |
| `0x01FAED50` | `running` | `0x015E7A00` |
| `0x01FAED50` | `status` | `0x015E7920` |
| `0x01FAED50` | `wrap` | `0x015E7880` |
| `0x01FAED50` | `yield` | `0x015E78F0` |
| `0x01FAED50` | `isyieldable` | `0x015E7990` |
| `0x01FAED50` | `close` | `0x015E7A30` |
| `0x01FAEF50` | `concat` | `0x015E8310` |
| `0x01FAEF50` | `insert` | `0x015E7DB0` |
| `0x01FAEF50` | `pack` | `0x015E8540` |
| `0x01FAEF50` | `unpack` | `0x015E85F0` |
| `0x01FAEF50` | `remove` | `0x015E7F40` |
| `0x01FAEF50` | `move` | `0x015E80C0` |
| `0x01FAEF50` | `sort` | `0x015E86E0` |
| `0x01FAF0E0` | `close` | `0x015E9570` |
| `0x01FAF0E0` | `flush` | `0x015E9320` |
| `0x01FAF0E0` | `input` | `0x015E8D20` |
| `0x01FAF0E0` | `lines` | `0x015E8E90` |
| `0x01FAF0E0` | `open` | `0x015E9660` |
| `0x01FAF0E0` | `output` | `0x015E8DB0` |
| `0x01FAF0E0` | `popen` | `0x015E97A0` |
| `0x01FAF0E0` | `read` | `0x015E8FB0` |
| `0x01FAF0E0` | `tmpfile` | `0x015E9880` |
| `0x01FAF0E0` | `type` | `0x015E9430` |
| `0x01FAF0E0` | `write` | `0x015E9080` |
| `0x01FAF1A0` | `read` | `0x015E9020` |
| `0x01FAF1A0` | `write` | `0x015E90F0` |
| `0x01FAF1A0` | `lines` | `0x015E8E40` |
| `0x01FAF1A0` | `flush` | `0x015E93B0` |
| `0x01FAF1A0` | `seek` | `0x015E9160` |
| `0x01FAF1A0` | `close` | `0x015E9500` |
| `0x01FAF1A0` | `setvbuf` | `0x015E9250` |
| `0x01FAF230` | `__gc` | `0x015E9600` |
| `0x01FAF230` | `__close` | `0x015E9600` |
| `0x01FAF230` | `__tostring` | `0x015E94A0` |
| `0x01FAF5A0` | `clock` | `0x015EAE40` |
| `0x01FAF5A0` | `date` | `0x015EA6F0` |
| `0x01FAF5A0` | `difftime` | `0x015EAB00` |
| `0x01FAF5A0` | `execute` | `0x015EAC40` |
| `0x01FAF5A0` | `exit` | `0x015EABC0` |
| `0x01FAF5A0` | `getenv` | `0x015EAE00` |
| `0x01FAF5A0` | `remove` | `0x015EACB0` |
| `0x01FAF5A0` | `rename` | `0x015EAD10` |
| `0x01FAF5A0` | `setlocale` | `0x015EAB50` |
| `0x01FAF5A0` | `time` | `0x015EA970` |
| `0x01FAF5A0` | `tmpname` | `0x015EAD90` |
| `0x01FAF830` | `byte` | `0x015EB5F0` |
| `0x01FAF830` | `char` | `0x015EB710` |
| `0x01FAF830` | `dump` | `0x015EB7F0` |
| `0x01FAF870` | `format` | `0x015EBD20` |
| `0x01FAF870` | `gmatch` | `0x015EB9C0` |
| `0x01FAF870` | `gsub` | `0x015EBAD0` |
| `0x01FAF870` | `len` | `0x015EB120` |
| `0x01FAF870` | `lower` | `0x015EB2E0` |
| `0x01FAF8D0` | `rep` | `0x015EB460` |
| `0x01FAF8D0` | `reverse` | `0x015EB240` |
| `0x01FAF8D0` | `sub` | `0x015EB150` |
| `0x01FAF8D0` | `upper` | `0x015EB3A0` |
| `0x01FAF8D0` | `pack` | `0x015EC560` |
| `0x01FAF8D0` | `packsize` | `0x015ECC30` |
| `0x01FAF8D0` | `unpack` | `0x015ECDD0` |
| `0x01FAFF20` | `offset` | `0x015EF5C0` |
| `0x01FAFF20` | `codepoint` | `0x015EF290` |
| `0x01FAFF20` | `char` | `0x015EF4A0` |
| `0x01FAFF20` | `len` | `0x015EF120` |
| `0x01FAFF20` | `codes` | `0x015EF740` |
| `0x01FB0040` | `abs` | `0x015EFA30` |
| `0x01FB0040` | `acos` | `0x015EFB60` |
| `0x01FB0040` | `asin` | `0x015EFB30` |
| `0x01FB0040` | `atan` | `0x015EFB90` |
| `0x01FB0040` | `ceil` | `0x015EFCD0` |
| `0x01FB0040` | `cos` | `0x015EFAD0` |
| `0x01FB0040` | `deg` | `0x015F00A0` |
| `0x01FB0040` | `exp` | `0x015F0070` |
| `0x01FB0040` | `tointeger` | `0x015EFBF0` |
| `0x01FB0040` | `floor` | `0x015EFC50` |
| `0x01FB0040` | `fmod` | `0x015EFD50` |
| `0x01FB0040` | `ult` | `0x015EFF60` |
| `0x01FB0040` | `log` | `0x015EFFB0` |
| `0x01FB0040` | `max` | `0x015F01C0` |
| `0x01FB0040` | `min` | `0x015F0120` |
| `0x01FB0040` | `modf` | `0x015EFE50` |
| `0x01FB0040` | `rad` | `0x015F00E0` |
| `0x01FB0040` | `sin` | `0x015EFAA0` |
| `0x01FB0040` | `sqrt` | `0x015EFF20` |
| `0x01FB0040` | `tan` | `0x015EFB00` |
| `0x01FB0040` | `type` | `0x015F0260` |
| `0x01FB02C0` | `debug` | `0x015F18B0` |
| `0x01FB02C0` | `getuservalue` | `0x015F0A10` |
| `0x01FB02C0` | `gethook` | `0x015F1730` |
| `0x01FB02C0` | `getinfo` | `0x015F0B10` |
| `0x01FB02C0` | `getlocal` | `0x015F0FA0` |
| `0x01FB02C0` | `getregistry` | `0x015F0950` |
| `0x01FB02C0` | `getmetatable` | `0x015F0970` |
| `0x01FB02C0` | `getupvalue` | `0x015F1290` |
| `0x01FB02C0` | `upvaluejoin` | `0x015F1420` |
| `0x01FB02C0` | `upvalueid` | `0x015F13A0` |
| `0x01FB02C0` | `setuservalue` | `0x015F0A90` |
| `0x01FB02C0` | `sethook` | `0x015F1540` |
| `0x01FB02C0` | `setlocal` | `0x015F1120` |
| `0x01FB02C0` | `setmetatable` | `0x015F09B0` |
| `0x01FB02C0` | `setupvalue` | `0x015F1310` |
| `0x01FB02C0` | `traceback` | `0x015F1AA0` |
| `0x01FB02C0` | `setcstacklimit` | `0x015F1B70` |
| `0x024749E0` | `CreateContext` | `0x015BAE70` |
| `0x024749E0` | `LoadFontFace` | `0x015BAF90` |
| `0x024749E0` | `RegisterTag` | `0x015BB0D0` |
| `0x02474A20` | `contexts` | `0x015BB1D0` |
| `0x02474A20` | `key_identifier` | `0x015BB210` |
| `0x02474A20` | `key_modifier` | `0x015BB250` |
| `0x02474A60` | `red` | `0x015BCF60` |
| `0x02474A60` | `green` | `0x015BCFB0` |
| `0x02474A60` | `blue` | `0x015BD000` |
| `0x02474A60` | `alpha` | `0x015BD050` |
| `0x02474A60` | `rgba` | `0x015BD0A0` |
| `0x02474AC0` | `red` | `0x015BD120` |
| `0x02474AC0` | `green` | `0x015BD180` |
| `0x02474AC0` | `blue` | `0x015BD1E0` |
| `0x02474AC0` | `alpha` | `0x015BD240` |
| `0x02474AC0` | `rgba` | `0x015BD2A0` |
| `0x02474B20` | `red` | `0x015BD970` |
| `0x02474B20` | `green` | `0x015BD9C0` |
| `0x02474B20` | `blue` | `0x015BDA10` |
| `0x02474B20` | `alpha` | `0x015BDA60` |
| `0x02474B20` | `rgba` | `0x015BDAB0` |
| `0x02474B80` | `red` | `0x015BDB40` |
| `0x02474B80` | `green` | `0x015BDBB0` |
| `0x02474B80` | `blue` | `0x015BDC20` |
| `0x02474B80` | `alpha` | `0x015BDC90` |
| `0x02474B80` | `rgba` | `0x015BDD00` |
| `0x02474BE0` | `AddEventListener` | `0x015BE650` |
| `0x02474BE0` | `CreateDocument` | `0x015BEB60` |
| `0x02474BE0` | `LoadDocument` | `0x015BEC70` |
| `0x02474BE0` | `Render` | `0x015BED60` |
| `0x02474BE0` | `UnloadAllDocuments` | `0x015BED90` |
| `0x02474BE0` | `UnloadDocument` | `0x015BEDB0` |
| `0x02474BE0` | `Update` | `0x015BEDF0` |
| `0x02474BE0` | `OpenDataModel` | `0x015BE200` |
| `0x02474BE0` | `ProcessMouseMove` | `0x015BE240` |
| `0x02474BE0` | `ProcessMouseButtonDown` | `0x015BE2C0` |
| `0x02474BE0` | `ProcessMouseButtonUp` | `0x015BE320` |
| `0x02474BE0` | `ProcessMouseWheel` | `0x015BE380` |
| `0x02474BE0` | `ProcessMouseLeave` | `0x015BE3F0` |
| `0x02474BE0` | `IsMouseInteracting` | `0x015BE420` |
| `0x02474BE0` | `ProcessKeyDown` | `0x015BE450` |
| `0x02474BE0` | `ProcessKeyUp` | `0x015BE4B0` |
| `0x02474BE0` | `ProcessTextInput` | `0x015BE510` |
| `0x02474D00` | `dimensions` | `0x015BEE20` |
| `0x02474D00` | `documents` | `0x015BEE90` |
| `0x02474D00` | `dp_ratio` | `0x015BEF00` |
| `0x02474D00` | `focus_element` | `0x015BEF40` |
| `0x02474D00` | `hover_element` | `0x015BEFA0` |
| `0x02474D00` | `name` | `0x015BF000` |
| `0x02474D00` | `root_element` | `0x015BF060` |
| `0x02474DD0` | `PullToFront` | `0x015BFD30` |
| `0x02474DD0` | `PushToBack` | `0x015BFD50` |
| `0x02474DD0` | `Show` | `0x015BFD70` |
| `0x02474DD0` | `Hide` | `0x015BFDF0` |
| `0x02474DD0` | `Close` | `0x015BFE10` |
| `0x02474DD0` | `CreateElement` | `0x015BFE30` |
| `0x02474DD0` | `CreateTextNode` | `0x015BFFA0` |
| `0x02474EA0` | `AddEventListener` | `0x015C0980` |
| `0x02474EA0` | `AppendChild` | `0x015C0BE0` |
| `0x02474EA0` | `Blur` | `0x015C0CE0` |
| `0x02474EA0` | `Click` | `0x015C0D00` |
| `0x02474EA0` | `DispatchEvent` | `0x015C0D20` |
| `0x02474EA0` | `Focus` | `0x015C1270` |
| `0x02474EA0` | `GetAttribute` | `0x015C1290` |
| `0x02474EA0` | `GetElementById` | `0x015C1380` |
| `0x02474EA0` | `GetElementsByTagName` | `0x015C1470` |
| `0x02474EA0` | `QuerySelector` | `0x015C1780` |
| `0x02474EA0` | `QuerySelectorAll` | `0x015C1870` |
| `0x02474EA0` | `Matches` | `0x015C1B80` |
| `0x02474EA0` | `HasAttribute` | `0x015C1C50` |
| `0x02474EA0` | `HasChildNodes` | `0x015C1D20` |
| `0x02474EA0` | `InsertBefore` | `0x015C1D50` |
| `0x02474EA0` | `IsClassSet` | `0x015C1E70` |
| `0x02474EA0` | `RemoveAttribute` | `0x015C1F40` |
| `0x02474EA0` | `RemoveChild` | `0x015C2000` |
| `0x02474EA0` | `ReplaceChild` | `0x015C2070` |
| `0x02474EA0` | `ScrollIntoView` | `0x015C21A0` |
| `0x02474EA0` | `SetAttribute` | `0x015C21D0` |
| `0x02474EA0` | `SetClass` | `0x015C2340` |
| `0x02475010` | `attributes` | `0x015C2430` |
| `0x02475010` | `child_nodes` | `0x015C24A0` |
| `0x02475010` | `class_name` | `0x015C2510` |
| `0x02475010` | `client_left` | `0x015C25D0` |
| `0x02475010` | `client_height` | `0x015C2630` |
| `0x02475010` | `client_top` | `0x015C2690` |
| `0x02475010` | `client_width` | `0x015C26F0` |
| `0x02475010` | `first_child` | `0x015C2750` |
| `0x02475010` | `id` | `0x015C27B0` |
| `0x02475010` | `inner_rml` | `0x015C2810` |
| `0x02475010` | `last_child` | `0x015C28C0` |
| `0x02475010` | `next_sibling` | `0x015C2920` |
| `0x02475010` | `offset_height` | `0x015C2980` |
| `0x02475010` | `offset_left` | `0x015C29E0` |
| `0x02475010` | `offset_parent` | `0x015C2A40` |
| `0x02475010` | `offset_top` | `0x015C2AA0` |
| `0x02475010` | `offset_width` | `0x015C2B00` |
| `0x02475010` | `owner_document` | `0x015C2B60` |
| `0x02475010` | `parent_node` | `0x015C2BC0` |
| `0x02475010` | `previous_sibling` | `0x015C2C20` |
| `0x02475010` | `scroll_height` | `0x015C2C80` |
| `0x02475010` | `scroll_left` | `0x015C2CE0` |
| `0x02475010` | `scroll_top` | `0x015C2D40` |
| `0x02475010` | `scroll_width` | `0x015C2DA0` |
| `0x02475010` | `style` | `0x015C2E00` |
| `0x02475010` | `tag_name` | `0x015C2E70` |
| `0x024751C0` | `class_name` | `0x015C2ED0` |
| `0x024751C0` | `id` | `0x015C2FC0` |
| `0x024751C0` | `inner_rml` | `0x015C30B0` |
| `0x024751C0` | `scroll_left` | `0x015C31B0` |
| `0x024751C0` | `scroll_top` | `0x015C3220` |
| `0x024752F0` | `current_element` | `0x015C51D0` |
| `0x024752F0` | `type` | `0x015C5230` |
| `0x024752F0` | `target_element` | `0x015C5410` |
| `0x024752F0` | `parameters` | `0x015C5470` |
| `0x02475340` | `DotProduct` | `0x015C6200` |
| `0x02475340` | `Normalise` | `0x015C6270` |
| `0x02475340` | `Rotate` | `0x015C6320` |
| `0x02475380` | `x` | `0x015C63F0` |
| `0x02475380` | `y` | `0x015C6440` |
| `0x02475380` | `magnitude` | `0x015C6490` |
| `0x024753F0` | `x` | `0x015C6CF0` |
| `0x024753F0` | `y` | `0x015C6D40` |
| `0x024753F0` | `magnitude` | `0x015C6D90` |
| `0x02475480` | `disabled` | `0x015C78C0` |
| `0x02475480` | `name` | `0x015C7910` |
| `0x02475480` | `value` | `0x015C79C0` |
| `0x024754C0` | `disabled` | `0x015C7A80` |
| `0x024754C0` | `name` | `0x015C7AF0` |
| `0x024754C0` | `value` | `0x015C7BE0` |
| `0x02475500` | `Select` | `0x015C8030` |
| `0x02475500` | `SetSelection` | `0x015C8050` |
| `0x02475500` | `GetSelection` | `0x015C80A0` |
| `0x02475540` | `checked` | `0x015C8180` |
| `0x02475540` | `maxlength` | `0x015C8270` |
| `0x02475540` | `size` | `0x015C8370` |
| `0x02475540` | `max` | `0x015C8460` |
| `0x02475540` | `min` | `0x015C8550` |
| `0x02475540` | `step` | `0x015C8640` |
| `0x024755B0` | `checked` | `0x015C8730` |
| `0x024755B0` | `maxlength` | `0x015C8890` |
| `0x024755B0` | `size` | `0x015C8990` |
| `0x024755B0` | `max` | `0x015C8A80` |
| `0x024755B0` | `min` | `0x015C8B80` |
| `0x024755B0` | `step` | `0x015C8C80` |
| `0x02475620` | `Add` | `0x015C9260` |
| `0x02475620` | `Remove` | `0x015C9410` |
| `0x02475620` | `RemoveAll` | `0x015C9560` |
| `0x024756B0` | `Select` | `0x015C9AC0` |
| `0x024756B0` | `SetSelection` | `0x015C9AE0` |
| `0x024756B0` | `GetSelection` | `0x015C9B30` |
| `0x024756F0` | `cols` | `0x015C9C10` |
| `0x024756F0` | `maxlength` | `0x015C9C60` |
| `0x024756F0` | `rows` | `0x015C9CB0` |
| `0x024756F0` | `wordwrap` | `0x015C9D00` |
| `0x02475740` | `cols` | `0x015C9D50` |
| `0x02475740` | `maxlength` | `0x015C9DB0` |
| `0x02475740` | `rows` | `0x015C9E10` |
| `0x02475740` | `wordwrap` | `0x015C9E70` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
