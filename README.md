# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.60 | `0203214610` | 2026-10-15 09:54:05 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01C26FA0` |
| SHA-256 | `d790241d8d43b6fd80bd3705eb8f8efb7a04369d21163be29f1fa59925ac0ed9` |
| functions in `.pdata` | 73986 |
| generated | 2026-10-28 11:48:13Z |

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
| anticheat | `PunchHackDetector` | `0x00AE8350` | 3334 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x00979C80` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x0097D080` | 596 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A0A730` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00B24550` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00B248B0` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00A27690` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x009A8AE0` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A13860` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C0A1C0` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00DE2E70` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x00FCFB00` | 8898 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00D1E520` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00D71550` | 9274 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x0119C350` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x011A8670` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x008D5AB0` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00D63040` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E14960` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E14960` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x010053B0` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x01006EA0` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x0100C350` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x01029430` | 3532 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x0102B870` | 809 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x01223AA0` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x01244940` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00DB1E70` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00DB2430` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00DB4540` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00DB4610` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00DB4C30` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00A3C020` | 40035 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00C2D350` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00C44D00` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00C45E90` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00C47610` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00C47760` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00C5B6C0` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00C5BC20` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00C7C080` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A0A750` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A0AB70` | 1360 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A0CCA0` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00A69D70` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00AEA7C0` | 2289 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00B30010` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00B3A840` | 17672 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00B6FDF0` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00C3CE30` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00C3FDA0` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00C3FEC0` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00DC7B20` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x010E6DF0` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x0127D890` | 892 | VERIFIED | `unknown var type` |
| pets | `Scepter_RenderPet` | `0x006979E0` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x0075A4B0` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x0076F3C0` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x008CFEF0` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x008E52E0` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00BC7880` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x00FC9190` | 11502 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00ADDE50` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00AE3850` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00B32820` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00B35790` | 3665 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| trade | `TradeOtherPlayerGuard` | `0x00D833C0` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00D84B00` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x0097E140` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00AFA150` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00B299A0` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00B372A0` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00CBE010` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `DialogBuilder` | `0x00CF8C50` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D080A0` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `OnButtonSelectedHandler` | `0x00D0DCF0` | 4497 | VERIFIED | `OnButtonSelected` |
| ui | `BannerDialogBuilder` | `0x00D75770` | 9568 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00D8A180` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00D8A3A0` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00DC5420` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00DC57E0` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x01060F80` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x010829E0` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x010A6130` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x010D7A00` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x010D7FF0` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x010D8270` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x011B3390` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x011D6C60` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x011DA850` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x01215AD0` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| world | `TileCoordinateHandler` | `0x009A7090` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x009BE4A0` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00A2B260` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00AEF6C0` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00B3A840` | 17672 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00C01910` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00C28820` | 15833 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00C5C460` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00C6D550` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00C83920` | 1204 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00CE8A90` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D0A450` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x010EE4A0` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x0143A840` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x0143B040` | 1095 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x01DA2940` | `_G` | `0x015C2450` |
| `0x01DA2940` | `package` | `0x015CD810` |
| `0x01DA2940` | `coroutine` | `0x015C2AC0` |
| `0x01DA2940` | `table` | `0x015C3A30` |
| `0x01DA2940` | `io` | `0x015C5240` |
| `0x01DA2940` | `os` | `0x015C5E30` |
| `0x01DA2940` | `string` | `0x015C9DB0` |
| `0x01DA2940` | `math` | `0x015CB570` |
| `0x01DA2940` | `utf8` | `0x015CA710` |
| `0x01DA2940` | `debug` | `0x015CC9B0` |
| `0x01DA35E0` | `assert` | `0x015C13E0` |
| `0x01DA35E0` | `collectgarbage` | `0x015C1D90` |
| `0x01DA35E0` | `dofile` | `0x015C1350` |
| `0x01DA35E0` | `error` | `0x015C1AA0` |
| `0x01DA35E0` | `getmetatable` | `0x015C1B20` |
| `0x01DA35E0` | `ipairs` | `0x015C2110` |
| `0x01DA35E0` | `loadfile` | `0x015C2160` |
| `0x01DA35E0` | `load` | `0x015C1250` |
| `0x01DA35E0` | `next` | `0x015C2010` |
| `0x01DA35E0` | `pairs` | `0x015C2070` |
| `0x01DA35E0` | `pcall` | `0x015C1580` |
| `0x01DA35E0` | `print` | `0x015C1710` |
| `0x01DA35E0` | `warn` | `0x015C1800` |
| `0x01DA35E0` | `rawequal` | `0x015C1C30` |
| `0x01DA35E0` | `rawlen` | `0x015C1C80` |
| `0x01DA35E0` | `rawget` | `0x015C1CE0` |
| `0x01DA35E0` | `rawset` | `0x015C1D30` |
| `0x01DA35E0` | `select` | `0x015C14C0` |
| `0x01DA35E0` | `setmetatable` | `0x015C1B80` |
| `0x01DA35E0` | `tonumber` | `0x015C18B0` |
| `0x01DA35E0` | `tostring` | `0x015C16E0` |
| `0x01DA35E0` | `type` | `0x015C1FB0` |
| `0x01DA35E0` | `xpcall` | `0x015C1620` |
| `0x01DA3A10` | `create` | `0x015C2580` |
| `0x01DA3A10` | `resume` | `0x015C24D0` |
| `0x01DA3A10` | `running` | `0x015C2760` |
| `0x01DA3A10` | `status` | `0x015C2680` |
| `0x01DA3A10` | `wrap` | `0x015C25E0` |
| `0x01DA3A10` | `yield` | `0x015C2650` |
| `0x01DA3A10` | `isyieldable` | `0x015C26F0` |
| `0x01DA3A10` | `close` | `0x015C2790` |
| `0x01DA3C10` | `concat` | `0x015C3070` |
| `0x01DA3C10` | `insert` | `0x015C2B10` |
| `0x01DA3C10` | `pack` | `0x015C32A0` |
| `0x01DA3C10` | `unpack` | `0x015C3350` |
| `0x01DA3C10` | `remove` | `0x015C2CA0` |
| `0x01DA3C10` | `move` | `0x015C2E20` |
| `0x01DA3C10` | `sort` | `0x015C3440` |
| `0x01DA3DA0` | `close` | `0x015C42D0` |
| `0x01DA3DA0` | `flush` | `0x015C4080` |
| `0x01DA3DA0` | `input` | `0x015C3A80` |
| `0x01DA3DA0` | `lines` | `0x015C3BF0` |
| `0x01DA3DA0` | `open` | `0x015C43C0` |
| `0x01DA3DA0` | `output` | `0x015C3B10` |
| `0x01DA3DA0` | `popen` | `0x015C4500` |
| `0x01DA3DA0` | `read` | `0x015C3D10` |
| `0x01DA3DA0` | `tmpfile` | `0x015C45E0` |
| `0x01DA3DA0` | `type` | `0x015C4190` |
| `0x01DA3DA0` | `write` | `0x015C3DE0` |
| `0x01DA3E60` | `read` | `0x015C3D80` |
| `0x01DA3E60` | `write` | `0x015C3E50` |
| `0x01DA3E60` | `lines` | `0x015C3BA0` |
| `0x01DA3E60` | `flush` | `0x015C4110` |
| `0x01DA3E60` | `seek` | `0x015C3EC0` |
| `0x01DA3E60` | `close` | `0x015C4260` |
| `0x01DA3E60` | `setvbuf` | `0x015C3FB0` |
| `0x01DA3EF0` | `__gc` | `0x015C4360` |
| `0x01DA3EF0` | `__close` | `0x015C4360` |
| `0x01DA3EF0` | `__tostring` | `0x015C4200` |
| `0x01DA4260` | `clock` | `0x015C5BA0` |
| `0x01DA4260` | `date` | `0x015C5450` |
| `0x01DA4260` | `difftime` | `0x015C5860` |
| `0x01DA4260` | `execute` | `0x015C59A0` |
| `0x01DA4260` | `exit` | `0x015C5920` |
| `0x01DA4260` | `getenv` | `0x015C5B60` |
| `0x01DA4260` | `remove` | `0x015C5A10` |
| `0x01DA4260` | `rename` | `0x015C5A70` |
| `0x01DA4260` | `setlocale` | `0x015C58B0` |
| `0x01DA4260` | `time` | `0x015C56D0` |
| `0x01DA4260` | `tmpname` | `0x015C5AF0` |
| `0x01DA44F0` | `byte` | `0x015C6350` |
| `0x01DA44F0` | `char` | `0x015C6470` |
| `0x01DA44F0` | `dump` | `0x015C6550` |
| `0x01DA4530` | `format` | `0x015C6A80` |
| `0x01DA4530` | `gmatch` | `0x015C6720` |
| `0x01DA4530` | `gsub` | `0x015C6830` |
| `0x01DA4530` | `len` | `0x015C5E80` |
| `0x01DA4530` | `lower` | `0x015C6040` |
| `0x01DA4590` | `rep` | `0x015C61C0` |
| `0x01DA4590` | `reverse` | `0x015C5FA0` |
| `0x01DA4590` | `sub` | `0x015C5EB0` |
| `0x01DA4590` | `upper` | `0x015C6100` |
| `0x01DA4590` | `pack` | `0x015C72C0` |
| `0x01DA4590` | `packsize` | `0x015C7990` |
| `0x01DA4590` | `unpack` | `0x015C7B30` |
| `0x01DA4BE0` | `offset` | `0x015CA320` |
| `0x01DA4BE0` | `codepoint` | `0x015C9FF0` |
| `0x01DA4BE0` | `char` | `0x015CA200` |
| `0x01DA4BE0` | `len` | `0x015C9E80` |
| `0x01DA4BE0` | `codes` | `0x015CA4A0` |
| `0x01DA4D00` | `abs` | `0x015CA790` |
| `0x01DA4D00` | `acos` | `0x015CA8C0` |
| `0x01DA4D00` | `asin` | `0x015CA890` |
| `0x01DA4D00` | `atan` | `0x015CA8F0` |
| `0x01DA4D00` | `ceil` | `0x015CAA30` |
| `0x01DA4D00` | `cos` | `0x015CA830` |
| `0x01DA4D00` | `deg` | `0x015CAE00` |
| `0x01DA4D00` | `exp` | `0x015CADD0` |
| `0x01DA4D00` | `tointeger` | `0x015CA950` |
| `0x01DA4D00` | `floor` | `0x015CA9B0` |
| `0x01DA4D00` | `fmod` | `0x015CAAB0` |
| `0x01DA4D00` | `ult` | `0x015CACC0` |
| `0x01DA4D00` | `log` | `0x015CAD10` |
| `0x01DA4D00` | `max` | `0x015CAF20` |
| `0x01DA4D00` | `min` | `0x015CAE80` |
| `0x01DA4D00` | `modf` | `0x015CABB0` |
| `0x01DA4D00` | `rad` | `0x015CAE40` |
| `0x01DA4D00` | `sin` | `0x015CA800` |
| `0x01DA4D00` | `sqrt` | `0x015CAC80` |
| `0x01DA4D00` | `tan` | `0x015CA860` |
| `0x01DA4D00` | `type` | `0x015CAFC0` |
| `0x01DA4F80` | `debug` | `0x015CC610` |
| `0x01DA4F80` | `getuservalue` | `0x015CB770` |
| `0x01DA4F80` | `gethook` | `0x015CC490` |
| `0x01DA4F80` | `getinfo` | `0x015CB870` |
| `0x01DA4F80` | `getlocal` | `0x015CBD00` |
| `0x01DA4F80` | `getregistry` | `0x015CB6B0` |
| `0x01DA4F80` | `getmetatable` | `0x015CB6D0` |
| `0x01DA4F80` | `getupvalue` | `0x015CBFF0` |
| `0x01DA4F80` | `upvaluejoin` | `0x015CC180` |
| `0x01DA4F80` | `upvalueid` | `0x015CC100` |
| `0x01DA4F80` | `setuservalue` | `0x015CB7F0` |
| `0x01DA4F80` | `sethook` | `0x015CC2A0` |
| `0x01DA4F80` | `setlocal` | `0x015CBE80` |
| `0x01DA4F80` | `setmetatable` | `0x015CB710` |
| `0x01DA4F80` | `setupvalue` | `0x015CC070` |
| `0x01DA4F80` | `traceback` | `0x015CC800` |
| `0x01DA4F80` | `setcstacklimit` | `0x015CC8D0` |
| `0x02220860` | `CreateContext` | `0x01595BD0` |
| `0x02220860` | `LoadFontFace` | `0x01595CF0` |
| `0x02220860` | `RegisterTag` | `0x01595E30` |
| `0x022208A0` | `contexts` | `0x01595F30` |
| `0x022208A0` | `key_identifier` | `0x01595F70` |
| `0x022208A0` | `key_modifier` | `0x01595FB0` |
| `0x022208E0` | `red` | `0x01597CC0` |
| `0x022208E0` | `green` | `0x01597D10` |
| `0x022208E0` | `blue` | `0x01597D60` |
| `0x022208E0` | `alpha` | `0x01597DB0` |
| `0x022208E0` | `rgba` | `0x01597E00` |
| `0x02220940` | `red` | `0x01597E80` |
| `0x02220940` | `green` | `0x01597EE0` |
| `0x02220940` | `blue` | `0x01597F40` |
| `0x02220940` | `alpha` | `0x01597FA0` |
| `0x02220940` | `rgba` | `0x01598000` |
| `0x022209A0` | `red` | `0x015986D0` |
| `0x022209A0` | `green` | `0x01598720` |
| `0x022209A0` | `blue` | `0x01598770` |
| `0x022209A0` | `alpha` | `0x015987C0` |
| `0x022209A0` | `rgba` | `0x01598810` |
| `0x02220A00` | `red` | `0x015988A0` |
| `0x02220A00` | `green` | `0x01598910` |
| `0x02220A00` | `blue` | `0x01598980` |
| `0x02220A00` | `alpha` | `0x015989F0` |
| `0x02220A00` | `rgba` | `0x01598A60` |
| `0x02220A60` | `AddEventListener` | `0x015993B0` |
| `0x02220A60` | `CreateDocument` | `0x015998C0` |
| `0x02220A60` | `LoadDocument` | `0x015999D0` |
| `0x02220A60` | `Render` | `0x01599AC0` |
| `0x02220A60` | `UnloadAllDocuments` | `0x01599AF0` |
| `0x02220A60` | `UnloadDocument` | `0x01599B10` |
| `0x02220A60` | `Update` | `0x01599B50` |
| `0x02220A60` | `OpenDataModel` | `0x01598F60` |
| `0x02220A60` | `ProcessMouseMove` | `0x01598FA0` |
| `0x02220A60` | `ProcessMouseButtonDown` | `0x01599020` |
| `0x02220A60` | `ProcessMouseButtonUp` | `0x01599080` |
| `0x02220A60` | `ProcessMouseWheel` | `0x015990E0` |
| `0x02220A60` | `ProcessMouseLeave` | `0x01599150` |
| `0x02220A60` | `IsMouseInteracting` | `0x01599180` |
| `0x02220A60` | `ProcessKeyDown` | `0x015991B0` |
| `0x02220A60` | `ProcessKeyUp` | `0x01599210` |
| `0x02220A60` | `ProcessTextInput` | `0x01599270` |
| `0x02220B80` | `dimensions` | `0x01599B80` |
| `0x02220B80` | `documents` | `0x01599BF0` |
| `0x02220B80` | `dp_ratio` | `0x01599C60` |
| `0x02220B80` | `focus_element` | `0x01599CA0` |
| `0x02220B80` | `hover_element` | `0x01599D00` |
| `0x02220B80` | `name` | `0x01599D60` |
| `0x02220B80` | `root_element` | `0x01599DC0` |
| `0x02220C50` | `PullToFront` | `0x0159AA90` |
| `0x02220C50` | `PushToBack` | `0x0159AAB0` |
| `0x02220C50` | `Show` | `0x0159AAD0` |
| `0x02220C50` | `Hide` | `0x0159AB50` |
| `0x02220C50` | `Close` | `0x0159AB70` |
| `0x02220C50` | `CreateElement` | `0x0159AB90` |
| `0x02220C50` | `CreateTextNode` | `0x0159AD00` |
| `0x02220D20` | `AddEventListener` | `0x0159B6E0` |
| `0x02220D20` | `AppendChild` | `0x0159B940` |
| `0x02220D20` | `Blur` | `0x0159BA40` |
| `0x02220D20` | `Click` | `0x0159BA60` |
| `0x02220D20` | `DispatchEvent` | `0x0159BA80` |
| `0x02220D20` | `Focus` | `0x0159BFD0` |
| `0x02220D20` | `GetAttribute` | `0x0159BFF0` |
| `0x02220D20` | `GetElementById` | `0x0159C0E0` |
| `0x02220D20` | `GetElementsByTagName` | `0x0159C1D0` |
| `0x02220D20` | `QuerySelector` | `0x0159C4E0` |
| `0x02220D20` | `QuerySelectorAll` | `0x0159C5D0` |
| `0x02220D20` | `Matches` | `0x0159C8E0` |
| `0x02220D20` | `HasAttribute` | `0x0159C9B0` |
| `0x02220D20` | `HasChildNodes` | `0x0159CA80` |
| `0x02220D20` | `InsertBefore` | `0x0159CAB0` |
| `0x02220D20` | `IsClassSet` | `0x0159CBD0` |
| `0x02220D20` | `RemoveAttribute` | `0x0159CCA0` |
| `0x02220D20` | `RemoveChild` | `0x0159CD60` |
| `0x02220D20` | `ReplaceChild` | `0x0159CDD0` |
| `0x02220D20` | `ScrollIntoView` | `0x0159CF00` |
| `0x02220D20` | `SetAttribute` | `0x0159CF30` |
| `0x02220D20` | `SetClass` | `0x0159D0A0` |
| `0x02220E90` | `attributes` | `0x0159D190` |
| `0x02220E90` | `child_nodes` | `0x0159D200` |
| `0x02220E90` | `class_name` | `0x0159D270` |
| `0x02220E90` | `client_left` | `0x0159D330` |
| `0x02220E90` | `client_height` | `0x0159D390` |
| `0x02220E90` | `client_top` | `0x0159D3F0` |
| `0x02220E90` | `client_width` | `0x0159D450` |
| `0x02220E90` | `first_child` | `0x0159D4B0` |
| `0x02220E90` | `id` | `0x0159D510` |
| `0x02220E90` | `inner_rml` | `0x0159D570` |
| `0x02220E90` | `last_child` | `0x0159D620` |
| `0x02220E90` | `next_sibling` | `0x0159D680` |
| `0x02220E90` | `offset_height` | `0x0159D6E0` |
| `0x02220E90` | `offset_left` | `0x0159D740` |
| `0x02220E90` | `offset_parent` | `0x0159D7A0` |
| `0x02220E90` | `offset_top` | `0x0159D800` |
| `0x02220E90` | `offset_width` | `0x0159D860` |
| `0x02220E90` | `owner_document` | `0x0159D8C0` |
| `0x02220E90` | `parent_node` | `0x0159D920` |
| `0x02220E90` | `previous_sibling` | `0x0159D980` |
| `0x02220E90` | `scroll_height` | `0x0159D9E0` |
| `0x02220E90` | `scroll_left` | `0x0159DA40` |
| `0x02220E90` | `scroll_top` | `0x0159DAA0` |
| `0x02220E90` | `scroll_width` | `0x0159DB00` |
| `0x02220E90` | `style` | `0x0159DB60` |
| `0x02220E90` | `tag_name` | `0x0159DBD0` |
| `0x02221040` | `class_name` | `0x0159DC30` |
| `0x02221040` | `id` | `0x0159DD20` |
| `0x02221040` | `inner_rml` | `0x0159DE10` |
| `0x02221040` | `scroll_left` | `0x0159DF10` |
| `0x02221040` | `scroll_top` | `0x0159DF80` |
| `0x02221170` | `current_element` | `0x0159FF30` |
| `0x02221170` | `type` | `0x0159FF90` |
| `0x02221170` | `target_element` | `0x015A0170` |
| `0x02221170` | `parameters` | `0x015A01D0` |
| `0x022211C0` | `DotProduct` | `0x015A0F60` |
| `0x022211C0` | `Normalise` | `0x015A0FD0` |
| `0x022211C0` | `Rotate` | `0x015A1080` |
| `0x02221200` | `x` | `0x015A1150` |
| `0x02221200` | `y` | `0x015A11A0` |
| `0x02221200` | `magnitude` | `0x015A11F0` |
| `0x02221270` | `x` | `0x015A1A50` |
| `0x02221270` | `y` | `0x015A1AA0` |
| `0x02221270` | `magnitude` | `0x015A1AF0` |
| `0x02221300` | `disabled` | `0x015A2620` |
| `0x02221300` | `name` | `0x015A2670` |
| `0x02221300` | `value` | `0x015A2720` |
| `0x02221340` | `disabled` | `0x015A27E0` |
| `0x02221340` | `name` | `0x015A2850` |
| `0x02221340` | `value` | `0x015A2940` |
| `0x02221380` | `Select` | `0x015A2D90` |
| `0x02221380` | `SetSelection` | `0x015A2DB0` |
| `0x02221380` | `GetSelection` | `0x015A2E00` |
| `0x022213C0` | `checked` | `0x015A2EE0` |
| `0x022213C0` | `maxlength` | `0x015A2FD0` |
| `0x022213C0` | `size` | `0x015A30D0` |
| `0x022213C0` | `max` | `0x015A31C0` |
| `0x022213C0` | `min` | `0x015A32B0` |
| `0x022213C0` | `step` | `0x015A33A0` |
| `0x02221430` | `checked` | `0x015A3490` |
| `0x02221430` | `maxlength` | `0x015A35F0` |
| `0x02221430` | `size` | `0x015A36F0` |
| `0x02221430` | `max` | `0x015A37E0` |
| `0x02221430` | `min` | `0x015A38E0` |
| `0x02221430` | `step` | `0x015A39E0` |
| `0x022214A0` | `Add` | `0x015A3FC0` |
| `0x022214A0` | `Remove` | `0x015A4170` |
| `0x022214A0` | `RemoveAll` | `0x015A42C0` |
| `0x02221530` | `Select` | `0x015A4820` |
| `0x02221530` | `SetSelection` | `0x015A4840` |
| `0x02221530` | `GetSelection` | `0x015A4890` |
| `0x02221570` | `cols` | `0x015A4970` |
| `0x02221570` | `maxlength` | `0x015A49C0` |
| `0x02221570` | `rows` | `0x015A4A10` |
| `0x02221570` | `wordwrap` | `0x015A4A60` |
| `0x022215C0` | `cols` | `0x015A4AB0` |
| `0x022215C0` | `maxlength` | `0x015A4B10` |
| `0x022215C0` | `rows` | `0x015A4B70` |
| `0x022215C0` | `wordwrap` | `0x015A4BD0` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
