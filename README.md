# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.59 | `061020261` | 2026-10-06 07:38:58 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01C21100` |
| SHA-256 | `caa6aff1cc4f21786078509040103d2439bd0eecc5f4c3daa1f07cb4b9d3534b` |
| functions in `.pdata` | 73930 |
| generated | 2026-10-10 11:32:47Z |

| Status | Count | Meaning |
| ------ | ----: | ------- |
| VERIFIED | 400 | Address is a `.pdata` function start in the executable `.text` segment |
| CHECK | 2 | Resolved but did not satisfy every check |
| UNRESOLVED | 4 | No single owner found for the anchor |

**Total functions/methods documented:** `402`

---

## Part 1 - Engine & gameplay functions (anchor-string resolution)

| Category | Function | Offset (RVA) | Size | Status | Anchor string / evidence |
| -------- | -------- | ------------ | ---: | ------ | ------------------------ |
| anticheat | `PunchHackDetector` | `0x00AE6ED0` | 3334 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x00978910` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x0097BD10` | 596 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A08E80` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00B210D0` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00B21430` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00A25DE0` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x009A7730` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A11FB0` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C06CC0` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00DDBDF0` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x00FC8C40` | 8898 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00D18AC0` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00D6A4E0` | 9274 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x011952D0` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x011A15F0` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x008D4780` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00D5BFD0` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E0D8E0` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E0D8E0` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x00FFE4F0` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x00FFFFE0` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x01005490` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x01022590` | 3532 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x010249D0` | 809 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x0121CA20` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x0123D8C0` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00DAAE00` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00DAB3C0` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00DAD4D0` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00DAD5A0` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00DADBC0` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00A3A770` | 40035 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00C29E50` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00C41800` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00C42990` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00C44110` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00C44260` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00C581C0` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00C58720` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00C78B80` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A08EA0` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A092C0` | 1360 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A0B3F0` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00A684C0` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00AE9340` | 2289 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00B2CB90` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00B374D0` | 17672 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00B6C8F0` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00C39930` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00C3C8A0` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00C3C9C0` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00DC0AA0` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x010DFC10` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x01276810` | 892 | VERIFIED | `unknown var type` |
| pets | `Scepter_RenderPet` | `0x006966E0` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x007591A0` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x0076E0B0` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x008CEBC0` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x008E3FB0` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00BC4380` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x00FC22D0` | 11502 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00ADCA10` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00AE23D0` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00B2F3A0` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00B32310` | 3665 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| trade | `TradeOtherPlayerGuard` | `0x00D7C350` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00D7DA90` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x0097CDD0` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00AF6E50` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00B26520` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00B33E20` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00CB85B0` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `DialogBuilder` | `0x00CF31F0` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D02640` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `OnButtonSelectedHandler` | `0x00D55A90` | 3463 | VERIFIED | `OnButtonSelected` |
| ui | `BannerDialogBuilder` | `0x00D6E700` | 9568 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00D83110` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00D83330` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00DBE3A0` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00DBE760` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x01059DC0` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x0107B820` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x0109EF50` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x010D0820` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x010D0E10` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x010D1090` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x011AC310` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x011CFBE0` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x011D37D0` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x0120EA50` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| world | `TileCoordinateHandler` | `0x009A5CE0` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x009BD0F0` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00A299B0` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00AEE240` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00B374D0` | 17672 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00BFE410` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00C25320` | 15833 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00C58F60` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00C6A050` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00C80420` | 1204 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00CE3030` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D049F0` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x010E72C0` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x014352C0` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x01435AC0` | 1095 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x01D9D680` | `_G` | `0x015BCED0` |
| `0x01D9D680` | `package` | `0x015C8290` |
| `0x01D9D680` | `coroutine` | `0x015BD540` |
| `0x01D9D680` | `table` | `0x015BE4B0` |
| `0x01D9D680` | `io` | `0x015BFCC0` |
| `0x01D9D680` | `os` | `0x015C08B0` |
| `0x01D9D680` | `string` | `0x015C4830` |
| `0x01D9D680` | `math` | `0x015C5FF0` |
| `0x01D9D680` | `utf8` | `0x015C5190` |
| `0x01D9D680` | `debug` | `0x015C7430` |
| `0x01D9E320` | `assert` | `0x015BBE60` |
| `0x01D9E320` | `collectgarbage` | `0x015BC810` |
| `0x01D9E320` | `dofile` | `0x015BBDD0` |
| `0x01D9E320` | `error` | `0x015BC520` |
| `0x01D9E320` | `getmetatable` | `0x015BC5A0` |
| `0x01D9E320` | `ipairs` | `0x015BCB90` |
| `0x01D9E320` | `loadfile` | `0x015BCBE0` |
| `0x01D9E320` | `load` | `0x015BBCD0` |
| `0x01D9E320` | `next` | `0x015BCA90` |
| `0x01D9E320` | `pairs` | `0x015BCAF0` |
| `0x01D9E320` | `pcall` | `0x015BC000` |
| `0x01D9E320` | `print` | `0x015BC190` |
| `0x01D9E320` | `warn` | `0x015BC280` |
| `0x01D9E320` | `rawequal` | `0x015BC6B0` |
| `0x01D9E320` | `rawlen` | `0x015BC700` |
| `0x01D9E320` | `rawget` | `0x015BC760` |
| `0x01D9E320` | `rawset` | `0x015BC7B0` |
| `0x01D9E320` | `select` | `0x015BBF40` |
| `0x01D9E320` | `setmetatable` | `0x015BC600` |
| `0x01D9E320` | `tonumber` | `0x015BC330` |
| `0x01D9E320` | `tostring` | `0x015BC160` |
| `0x01D9E320` | `type` | `0x015BCA30` |
| `0x01D9E320` | `xpcall` | `0x015BC0A0` |
| `0x01D9E750` | `create` | `0x015BD000` |
| `0x01D9E750` | `resume` | `0x015BCF50` |
| `0x01D9E750` | `running` | `0x015BD1E0` |
| `0x01D9E750` | `status` | `0x015BD100` |
| `0x01D9E750` | `wrap` | `0x015BD060` |
| `0x01D9E750` | `yield` | `0x015BD0D0` |
| `0x01D9E750` | `isyieldable` | `0x015BD170` |
| `0x01D9E750` | `close` | `0x015BD210` |
| `0x01D9E950` | `concat` | `0x015BDAF0` |
| `0x01D9E950` | `insert` | `0x015BD590` |
| `0x01D9E950` | `pack` | `0x015BDD20` |
| `0x01D9E950` | `unpack` | `0x015BDDD0` |
| `0x01D9E950` | `remove` | `0x015BD720` |
| `0x01D9E950` | `move` | `0x015BD8A0` |
| `0x01D9E950` | `sort` | `0x015BDEC0` |
| `0x01D9EAE0` | `close` | `0x015BED50` |
| `0x01D9EAE0` | `flush` | `0x015BEB00` |
| `0x01D9EAE0` | `input` | `0x015BE500` |
| `0x01D9EAE0` | `lines` | `0x015BE670` |
| `0x01D9EAE0` | `open` | `0x015BEE40` |
| `0x01D9EAE0` | `output` | `0x015BE590` |
| `0x01D9EAE0` | `popen` | `0x015BEF80` |
| `0x01D9EAE0` | `read` | `0x015BE790` |
| `0x01D9EAE0` | `tmpfile` | `0x015BF060` |
| `0x01D9EAE0` | `type` | `0x015BEC10` |
| `0x01D9EAE0` | `write` | `0x015BE860` |
| `0x01D9EBA0` | `read` | `0x015BE800` |
| `0x01D9EBA0` | `write` | `0x015BE8D0` |
| `0x01D9EBA0` | `lines` | `0x015BE620` |
| `0x01D9EBA0` | `flush` | `0x015BEB90` |
| `0x01D9EBA0` | `seek` | `0x015BE940` |
| `0x01D9EBA0` | `close` | `0x015BECE0` |
| `0x01D9EBA0` | `setvbuf` | `0x015BEA30` |
| `0x01D9EC30` | `__gc` | `0x015BEDE0` |
| `0x01D9EC30` | `__close` | `0x015BEDE0` |
| `0x01D9EC30` | `__tostring` | `0x015BEC80` |
| `0x01D9EFA0` | `clock` | `0x015C0620` |
| `0x01D9EFA0` | `date` | `0x015BFED0` |
| `0x01D9EFA0` | `difftime` | `0x015C02E0` |
| `0x01D9EFA0` | `execute` | `0x015C0420` |
| `0x01D9EFA0` | `exit` | `0x015C03A0` |
| `0x01D9EFA0` | `getenv` | `0x015C05E0` |
| `0x01D9EFA0` | `remove` | `0x015C0490` |
| `0x01D9EFA0` | `rename` | `0x015C04F0` |
| `0x01D9EFA0` | `setlocale` | `0x015C0330` |
| `0x01D9EFA0` | `time` | `0x015C0150` |
| `0x01D9EFA0` | `tmpname` | `0x015C0570` |
| `0x01D9F230` | `byte` | `0x015C0DD0` |
| `0x01D9F230` | `char` | `0x015C0EF0` |
| `0x01D9F230` | `dump` | `0x015C0FD0` |
| `0x01D9F270` | `format` | `0x015C1500` |
| `0x01D9F270` | `gmatch` | `0x015C11A0` |
| `0x01D9F270` | `gsub` | `0x015C12B0` |
| `0x01D9F270` | `len` | `0x015C0900` |
| `0x01D9F270` | `lower` | `0x015C0AC0` |
| `0x01D9F2D0` | `rep` | `0x015C0C40` |
| `0x01D9F2D0` | `reverse` | `0x015C0A20` |
| `0x01D9F2D0` | `sub` | `0x015C0930` |
| `0x01D9F2D0` | `upper` | `0x015C0B80` |
| `0x01D9F2D0` | `pack` | `0x015C1D40` |
| `0x01D9F2D0` | `packsize` | `0x015C2410` |
| `0x01D9F2D0` | `unpack` | `0x015C25B0` |
| `0x01D9F920` | `offset` | `0x015C4DA0` |
| `0x01D9F920` | `codepoint` | `0x015C4A70` |
| `0x01D9F920` | `char` | `0x015C4C80` |
| `0x01D9F920` | `len` | `0x015C4900` |
| `0x01D9F920` | `codes` | `0x015C4F20` |
| `0x01D9FA40` | `abs` | `0x015C5210` |
| `0x01D9FA40` | `acos` | `0x015C5340` |
| `0x01D9FA40` | `asin` | `0x015C5310` |
| `0x01D9FA40` | `atan` | `0x015C5370` |
| `0x01D9FA40` | `ceil` | `0x015C54B0` |
| `0x01D9FA40` | `cos` | `0x015C52B0` |
| `0x01D9FA40` | `deg` | `0x015C5880` |
| `0x01D9FA40` | `exp` | `0x015C5850` |
| `0x01D9FA40` | `tointeger` | `0x015C53D0` |
| `0x01D9FA40` | `floor` | `0x015C5430` |
| `0x01D9FA40` | `fmod` | `0x015C5530` |
| `0x01D9FA40` | `ult` | `0x015C5740` |
| `0x01D9FA40` | `log` | `0x015C5790` |
| `0x01D9FA40` | `max` | `0x015C59A0` |
| `0x01D9FA40` | `min` | `0x015C5900` |
| `0x01D9FA40` | `modf` | `0x015C5630` |
| `0x01D9FA40` | `rad` | `0x015C58C0` |
| `0x01D9FA40` | `sin` | `0x015C5280` |
| `0x01D9FA40` | `sqrt` | `0x015C5700` |
| `0x01D9FA40` | `tan` | `0x015C52E0` |
| `0x01D9FA40` | `type` | `0x015C5A40` |
| `0x01D9FCC0` | `debug` | `0x015C7090` |
| `0x01D9FCC0` | `getuservalue` | `0x015C61F0` |
| `0x01D9FCC0` | `gethook` | `0x015C6F10` |
| `0x01D9FCC0` | `getinfo` | `0x015C62F0` |
| `0x01D9FCC0` | `getlocal` | `0x015C6780` |
| `0x01D9FCC0` | `getregistry` | `0x015C6130` |
| `0x01D9FCC0` | `getmetatable` | `0x015C6150` |
| `0x01D9FCC0` | `getupvalue` | `0x015C6A70` |
| `0x01D9FCC0` | `upvaluejoin` | `0x015C6C00` |
| `0x01D9FCC0` | `upvalueid` | `0x015C6B80` |
| `0x01D9FCC0` | `setuservalue` | `0x015C6270` |
| `0x01D9FCC0` | `sethook` | `0x015C6D20` |
| `0x01D9FCC0` | `setlocal` | `0x015C6900` |
| `0x01D9FCC0` | `setmetatable` | `0x015C6190` |
| `0x01D9FCC0` | `setupvalue` | `0x015C6AF0` |
| `0x01D9FCC0` | `traceback` | `0x015C7280` |
| `0x01D9FCC0` | `setcstacklimit` | `0x015C7350` |
| `0x0221A860` | `CreateContext` | `0x01590650` |
| `0x0221A860` | `LoadFontFace` | `0x01590770` |
| `0x0221A860` | `RegisterTag` | `0x015908B0` |
| `0x0221A8A0` | `contexts` | `0x015909B0` |
| `0x0221A8A0` | `key_identifier` | `0x015909F0` |
| `0x0221A8A0` | `key_modifier` | `0x01590A30` |
| `0x0221A8E0` | `red` | `0x01592740` |
| `0x0221A8E0` | `green` | `0x01592790` |
| `0x0221A8E0` | `blue` | `0x015927E0` |
| `0x0221A8E0` | `alpha` | `0x01592830` |
| `0x0221A8E0` | `rgba` | `0x01592880` |
| `0x0221A940` | `red` | `0x01592900` |
| `0x0221A940` | `green` | `0x01592960` |
| `0x0221A940` | `blue` | `0x015929C0` |
| `0x0221A940` | `alpha` | `0x01592A20` |
| `0x0221A940` | `rgba` | `0x01592A80` |
| `0x0221A9A0` | `red` | `0x01593150` |
| `0x0221A9A0` | `green` | `0x015931A0` |
| `0x0221A9A0` | `blue` | `0x015931F0` |
| `0x0221A9A0` | `alpha` | `0x01593240` |
| `0x0221A9A0` | `rgba` | `0x01593290` |
| `0x0221AA00` | `red` | `0x01593320` |
| `0x0221AA00` | `green` | `0x01593390` |
| `0x0221AA00` | `blue` | `0x01593400` |
| `0x0221AA00` | `alpha` | `0x01593470` |
| `0x0221AA00` | `rgba` | `0x015934E0` |
| `0x0221AA60` | `AddEventListener` | `0x01593E30` |
| `0x0221AA60` | `CreateDocument` | `0x01594340` |
| `0x0221AA60` | `LoadDocument` | `0x01594450` |
| `0x0221AA60` | `Render` | `0x01594540` |
| `0x0221AA60` | `UnloadAllDocuments` | `0x01594570` |
| `0x0221AA60` | `UnloadDocument` | `0x01594590` |
| `0x0221AA60` | `Update` | `0x015945D0` |
| `0x0221AA60` | `OpenDataModel` | `0x015939E0` |
| `0x0221AA60` | `ProcessMouseMove` | `0x01593A20` |
| `0x0221AA60` | `ProcessMouseButtonDown` | `0x01593AA0` |
| `0x0221AA60` | `ProcessMouseButtonUp` | `0x01593B00` |
| `0x0221AA60` | `ProcessMouseWheel` | `0x01593B60` |
| `0x0221AA60` | `ProcessMouseLeave` | `0x01593BD0` |
| `0x0221AA60` | `IsMouseInteracting` | `0x01593C00` |
| `0x0221AA60` | `ProcessKeyDown` | `0x01593C30` |
| `0x0221AA60` | `ProcessKeyUp` | `0x01593C90` |
| `0x0221AA60` | `ProcessTextInput` | `0x01593CF0` |
| `0x0221AB80` | `dimensions` | `0x01594600` |
| `0x0221AB80` | `documents` | `0x01594670` |
| `0x0221AB80` | `dp_ratio` | `0x015946E0` |
| `0x0221AB80` | `focus_element` | `0x01594720` |
| `0x0221AB80` | `hover_element` | `0x01594780` |
| `0x0221AB80` | `name` | `0x015947E0` |
| `0x0221AB80` | `root_element` | `0x01594840` |
| `0x0221AC50` | `PullToFront` | `0x01595510` |
| `0x0221AC50` | `PushToBack` | `0x01595530` |
| `0x0221AC50` | `Show` | `0x01595550` |
| `0x0221AC50` | `Hide` | `0x015955D0` |
| `0x0221AC50` | `Close` | `0x015955F0` |
| `0x0221AC50` | `CreateElement` | `0x01595610` |
| `0x0221AC50` | `CreateTextNode` | `0x01595780` |
| `0x0221AD20` | `AddEventListener` | `0x01596160` |
| `0x0221AD20` | `AppendChild` | `0x015963C0` |
| `0x0221AD20` | `Blur` | `0x015964C0` |
| `0x0221AD20` | `Click` | `0x015964E0` |
| `0x0221AD20` | `DispatchEvent` | `0x01596500` |
| `0x0221AD20` | `Focus` | `0x01596A50` |
| `0x0221AD20` | `GetAttribute` | `0x01596A70` |
| `0x0221AD20` | `GetElementById` | `0x01596B60` |
| `0x0221AD20` | `GetElementsByTagName` | `0x01596C50` |
| `0x0221AD20` | `QuerySelector` | `0x01596F60` |
| `0x0221AD20` | `QuerySelectorAll` | `0x01597050` |
| `0x0221AD20` | `Matches` | `0x01597360` |
| `0x0221AD20` | `HasAttribute` | `0x01597430` |
| `0x0221AD20` | `HasChildNodes` | `0x01597500` |
| `0x0221AD20` | `InsertBefore` | `0x01597530` |
| `0x0221AD20` | `IsClassSet` | `0x01597650` |
| `0x0221AD20` | `RemoveAttribute` | `0x01597720` |
| `0x0221AD20` | `RemoveChild` | `0x015977E0` |
| `0x0221AD20` | `ReplaceChild` | `0x01597850` |
| `0x0221AD20` | `ScrollIntoView` | `0x01597980` |
| `0x0221AD20` | `SetAttribute` | `0x015979B0` |
| `0x0221AD20` | `SetClass` | `0x01597B20` |
| `0x0221AE90` | `attributes` | `0x01597C10` |
| `0x0221AE90` | `child_nodes` | `0x01597C80` |
| `0x0221AE90` | `class_name` | `0x01597CF0` |
| `0x0221AE90` | `client_left` | `0x01597DB0` |
| `0x0221AE90` | `client_height` | `0x01597E10` |
| `0x0221AE90` | `client_top` | `0x01597E70` |
| `0x0221AE90` | `client_width` | `0x01597ED0` |
| `0x0221AE90` | `first_child` | `0x01597F30` |
| `0x0221AE90` | `id` | `0x01597F90` |
| `0x0221AE90` | `inner_rml` | `0x01597FF0` |
| `0x0221AE90` | `last_child` | `0x015980A0` |
| `0x0221AE90` | `next_sibling` | `0x01598100` |
| `0x0221AE90` | `offset_height` | `0x01598160` |
| `0x0221AE90` | `offset_left` | `0x015981C0` |
| `0x0221AE90` | `offset_parent` | `0x01598220` |
| `0x0221AE90` | `offset_top` | `0x01598280` |
| `0x0221AE90` | `offset_width` | `0x015982E0` |
| `0x0221AE90` | `owner_document` | `0x01598340` |
| `0x0221AE90` | `parent_node` | `0x015983A0` |
| `0x0221AE90` | `previous_sibling` | `0x01598400` |
| `0x0221AE90` | `scroll_height` | `0x01598460` |
| `0x0221AE90` | `scroll_left` | `0x015984C0` |
| `0x0221AE90` | `scroll_top` | `0x01598520` |
| `0x0221AE90` | `scroll_width` | `0x01598580` |
| `0x0221AE90` | `style` | `0x015985E0` |
| `0x0221AE90` | `tag_name` | `0x01598650` |
| `0x0221B040` | `class_name` | `0x015986B0` |
| `0x0221B040` | `id` | `0x015987A0` |
| `0x0221B040` | `inner_rml` | `0x01598890` |
| `0x0221B040` | `scroll_left` | `0x01598990` |
| `0x0221B040` | `scroll_top` | `0x01598A00` |
| `0x0221B170` | `current_element` | `0x0159A9B0` |
| `0x0221B170` | `type` | `0x0159AA10` |
| `0x0221B170` | `target_element` | `0x0159ABF0` |
| `0x0221B170` | `parameters` | `0x0159AC50` |
| `0x0221B1C0` | `DotProduct` | `0x0159B9E0` |
| `0x0221B1C0` | `Normalise` | `0x0159BA50` |
| `0x0221B1C0` | `Rotate` | `0x0159BB00` |
| `0x0221B200` | `x` | `0x0159BBD0` |
| `0x0221B200` | `y` | `0x0159BC20` |
| `0x0221B200` | `magnitude` | `0x0159BC70` |
| `0x0221B270` | `x` | `0x0159C4D0` |
| `0x0221B270` | `y` | `0x0159C520` |
| `0x0221B270` | `magnitude` | `0x0159C570` |
| `0x0221B300` | `disabled` | `0x0159D0A0` |
| `0x0221B300` | `name` | `0x0159D0F0` |
| `0x0221B300` | `value` | `0x0159D1A0` |
| `0x0221B340` | `disabled` | `0x0159D260` |
| `0x0221B340` | `name` | `0x0159D2D0` |
| `0x0221B340` | `value` | `0x0159D3C0` |
| `0x0221B380` | `Select` | `0x0159D810` |
| `0x0221B380` | `SetSelection` | `0x0159D830` |
| `0x0221B380` | `GetSelection` | `0x0159D880` |
| `0x0221B3C0` | `checked` | `0x0159D960` |
| `0x0221B3C0` | `maxlength` | `0x0159DA50` |
| `0x0221B3C0` | `size` | `0x0159DB50` |
| `0x0221B3C0` | `max` | `0x0159DC40` |
| `0x0221B3C0` | `min` | `0x0159DD30` |
| `0x0221B3C0` | `step` | `0x0159DE20` |
| `0x0221B430` | `checked` | `0x0159DF10` |
| `0x0221B430` | `maxlength` | `0x0159E070` |
| `0x0221B430` | `size` | `0x0159E170` |
| `0x0221B430` | `max` | `0x0159E260` |
| `0x0221B430` | `min` | `0x0159E360` |
| `0x0221B430` | `step` | `0x0159E460` |
| `0x0221B4A0` | `Add` | `0x0159EA40` |
| `0x0221B4A0` | `Remove` | `0x0159EBF0` |
| `0x0221B4A0` | `RemoveAll` | `0x0159ED40` |
| `0x0221B530` | `Select` | `0x0159F2A0` |
| `0x0221B530` | `SetSelection` | `0x0159F2C0` |
| `0x0221B530` | `GetSelection` | `0x0159F310` |
| `0x0221B570` | `cols` | `0x0159F3F0` |
| `0x0221B570` | `maxlength` | `0x0159F440` |
| `0x0221B570` | `rows` | `0x0159F490` |
| `0x0221B570` | `wordwrap` | `0x0159F4E0` |
| `0x0221B5C0` | `cols` | `0x0159F530` |
| `0x0221B5C0` | `maxlength` | `0x0159F590` |
| `0x0221B5C0` | `rows` | `0x0159F5F0` |
| `0x0221B5C0` | `wordwrap` | `0x0159F650` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
