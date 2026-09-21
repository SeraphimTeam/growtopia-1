# Growtopia offsets

**Latest Growtopia client**

| Version | Build Number | Updated (UTC) |
|---|---:|---|
| v5.57 | `010920268` | 2026-09-10 11:42:00 UTC |

**Image**

| | |
|---|---|
| image base | `0x140000000` |
| `.text` | `0x00001000-0x01E2FA28` |
| SHA-256 | `6f9fb6da0c381d4e4d9ec64519f8628d981282f4d0926dea2841f885104b0753` |
| functions in `.pdata` | 79990 |
| generated | 2026-09-21 11:21:06Z |

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
| anticheat | `PunchHackDetector` | `0x00AF4250` | 3334 | VERIFIED | `Punch hack detected!` |
| app | `GetApp` | `0x00984F70` | 8 | CHECK | `mov rax,[rip];ret pattern` |
| app | `App_Kill` | `0x00988410` | 454 | VERIFIED | `Don't call App::Kill() again.` |
| app | `GetClient` | `0x00A16270` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetPacketProcessor` | `0x00B2D9D0` | - | VERIFIED | `singleton accessor chain from GetApp` |
| app | `GetLocalAvatar` | `0x00B2DBA0` | - | CHECK | `singleton accessor chain from GetApp` |
| camera | `CameraManager` | `0x00A331D0` | 375 | VERIFIED | `warning: No camera was active` |
| combat | `PunchNoTileHandler` | `0x009B4BD0` | 72964 | VERIFIED | `a punch was sent with no tile!` |
| combat | `HarvestInteraction` | `0x00A1F3A0` | 3894 | VERIFIED | `You can harvest it by punching!` |
| combat | `WeaponDamageTierText` | `0x00C10EA0` | 710 | VERIFIED | `Increases the damage of all Tier 1 Weapons.<CR> `210%``` |
| combat | `PunchAction` | `0x00DE5970` | 6996 | VERIFIED | `Punch! + audio/punch_organic.wav` |
| combat | `OnDeathEquipTagHandler` | `0x00FDB570` | 8898 | VERIFIED | `OnDeath` |
| econ | `IAPPurchaseValidation` | `0x00D22F70` | 7344 | VERIFIED | `action\|houston_validation_done + currency\| + purchaseState\|` |
| econ | `StoreBuyPacketPath` | `0x00D738A0` | 8562 | VERIFIED | `OnStoreBuyConfirm` |
| economy | `IAPManager_LoadCurrenciesConfig` | `0x011A8880` | 1603 | VERIFIED | `IAPManager::LoadCurrenciesConfig() text.empty` |
| economy | `IAPManager_ctor` | `0x011B49B0` | 510 | VERIFIED | `IAPManager::IAPManager() iapText.empty` |
| fx | `SpriteRenderParser` | `0x008E04B0` | 344 | VERIFIED | `SpriteRender` |
| fx | `RTFont_GetColorFromString` | `0x00D64BB0` | 117 | VERIFIED | `RTFont::GetColorFromString> Bad code` |
| fx | `ParticleEmitter_GetPaintballColor` | `0x00E174B0` | 260 | VERIFIED | `ParticleEmitter::GetPaintballColor() un-defined color` |
| fx | `ParticleEmitterParser` | `0x00E174B0` | 260 | VERIFIED | `Emitter` |
| fx | `AnimCurveKeyFrameParser` | `0x01010E20` | 1507 | VERIFIED | `KeyFrame` |
| fx | `AnimTimeParser` | `0x01012910` | 508 | VERIFIED | `animTime` |
| fx | `SpriteAnimStateParser` | `0x01017DC0` | 1419 | VERIFIED | `playOnState` |
| fx | `StateMachineTransitions` | `0x01034EC0` | 3532 | VERIFIED | `Transitions` |
| fx | `RendererConditionParser` | `0x01037300` | 809 | VERIFIED | `Condition` |
| fx | `OnRenderHandler` | `0x012338F0` | 4477 | VERIFIED | `OnRender` |
| fx | `ResourceManager_GetSurfaceResource` | `0x01254790` | 781 | VERIFIED | `ResourceManager::GetSurfaceResource: Unable to load %s` |
| gfx | `VideoModeManager_AddVideoMode` | `0x00DB47C0` | 264 | VERIFIED | `VideoModeManager::AddVideoMode` |
| gfx | `VideoModeManager_GetCustomVideoModes` | `0x00DB4D80` | 436 | VERIFIED | `VideoModeManager::GetCustomVideoModes` |
| gfx | `VideoModeManager_SetFullscreen` | `0x00DB6E90` | 141 | VERIFIED | `VideoModeManager::SetFullscreenVideoMode` |
| gfx | `VideoModeManager_OnWMSize` | `0x00DB6F60` | 479 | VERIFIED | `VideoModeManager::OnWMSize` |
| gfx | `VideoModeManager_SetVideoMode` | `0x00DB7580` | 384 | VERIFIED | `VideoModeManager::SetVideoMode` |
| inventory | `ItemSurfaceRender` | `0x00A47B60` | 40035 | VERIFIED | `ERROR: Surface for item %d not loaded!` |
| inventory | `ItemHashCheck` | `0x00C33B00` | 4293 | VERIFIED | `Warning: No hash found for item %d` |
| inventory | `PlayerItems_AddItem` | `0x00C4B3C0` | 315 | VERIFIED | `PlayerItems::AddItem() nullptr == pItemInfo itemID=%d` |
| inventory | `PlayerItems_HaveRoomForItem` | `0x00C4C550` | 214 | VERIFIED | `PlayerItems::HaveRoomForItem() can not be.` |
| inventory | `PlayerItems_RemoveItem` | `0x00C4DCD0` | 324 | VERIFIED | `Error, can't remove all %d items of type %d from inventory` |
| inventory | `InventoryIllegalItemPurge` | `0x00C4DE20` | 1256 | VERIFIED | `[Removing Illegal Item] [Glitch] %d for player` |
| inventory | `ItemValidator` | `0x00C61DE0` | 1019 | VERIFIED | `Illegal item %d in %s` |
| inventory | `ItemsDatLoader` | `0x00C62340` | 2065 | VERIFIED | `Bad itemID %d in %s, skipping` |
| inventory | `ChooseVisual` | `0x00C827C0` | 620 | VERIFIED | `ChooseVisual: ItemId not found: %d` |
| net | `ENetHostConnectSetup` | `0x00A16290` | 470 | VERIFIED | `No available peers for initiating an ENet connection.` |
| net | `PacketTypeDispatcher` | `0x00A166B0` | 1360 | VERIFIED | `Got unknown packet type: %d` |
| net | `GameUpdatePacketSerializer` | `0x00A187E0` | 185 | VERIFIED | `GameUpdatePacket data: ` |
| net | `OnErrorFinishHandler` | `0x00A758B0` | 3511 | VERIFIED | `OnError` |
| net | `TileActionBuilder` | `0x00AF66C0` | 2289 | VERIFIED | `tileY\|` |
| net | `OnDisconnectedHandler` | `0x00B39300` | 54 | VERIFIED | `OnDisconnected` |
| net | `ProcessTankUpdatePacket` | `0x00B43830` | 17860 | VERIFIED | `Error reading function packet, ignoring` |
| net | `TrackPacketSender` | `0x00B78A80` | 3880 | VERIFIED | `Bad Track Packet , eventName not defined` |
| net | `PacketLengthValidator` | `0x00C43550` | 41 | VERIFIED | `Bad packet length, ignoring message` |
| net | `SendPacket` | `0x00C464C0` | 183 | VERIFIED | `Bad peer` |
| net | `SendPacketRaw` | `0x00C465E0` | 418 | VERIFIED | `Huge Packet Size %d` |
| net | `LoginPacketBuilder` | `0x00DCA460` | 14277 | VERIFIED | `tankIDName\| + requestedName\| + rid\|` |
| net | `DialogButtonBuilder` | `0x010F4D40` | 3790 | VERIFIED | `button\|` |
| net | `VariantListSerializeFromMem` | `0x0128CEE0` | 860 | VERIFIED | `unknown var type` |
| net | `AuthClient_Login` | `0x016C1820` | 6320 | VERIFIED | `AuthenticationClient::login with PlayerCredentials` |
| pets | `Scepter_RenderPet` | `0x006A24E0` | 866 | VERIFIED | `ScepterOfTheHonorGuardLogics::RenderPet` |
| pets | `OwlsOfAthenaPets_OnRespawned` | `0x00764F80` | 146 | VERIFIED | `OwlsOfAthenaPetsLogics::OnRespawned` |
| pets | `OwlsOfAthenaPets_RenderPet` | `0x00779E70` | 2339 | VERIFIED | `OwlsOfAthenaPetsLogics::RenderPet` |
| pets | `Flying2Pets_OnRespawned` | `0x008DA8F0` | 146 | VERIFIED | `Flying2PetsLogics::OnRespawned` |
| pets | `Flying2Pets_RenderPet` | `0x008EFCE0` | 1959 | VERIFIED | `Flying2PetsLogics::RenderPet` |
| pets | `BattlePetConfigLoader` | `0x00BCE510` | 989 | VERIFIED | `Can't load BattlePet info config: %s, error: %s, offset: %d` |
| physics | `ItemRendererXmlLoader` | `0x00FD4C00` | 11502 | VERIFIED | `PhysicsBody %s wasn't loaded correct.` |
| player | `FactionIconLoader` | `0x00AE9D90` | 13239 | VERIFIED | `Error loading Faction icons` |
| player | `NetAvatar_OnAvatarBePaintBalled` | `0x00AEF750` | 582 | VERIFIED | `NetAvatar::OnAvatarBePaintBalled sourceNetID is invalid=%d` |
| player | `NetAvatarNetIDEmitter` | `0x00B3BB10` | 248 | VERIFIED | `netID\|` |
| player | `NetAvatarSpawnHandler` | `0x00B3E690` | 3665 | VERIFIED | `netID\| + mstate\| + smstate\|` |
| player | `PlayerProgression` | `0x016AC4F0` | 1056 | VERIFIED | `player.progression.%s` |
| trade | `TradeOtherPlayerGuard` | `0x00D85D10` | 4432 | VERIFIED | `other player doesn't exist!` |
| trade | `TradeHandler` | `0x00D87450` | 2294 | VERIFIED | `CancelTrade` |
| ui | `Controller_Release` | `0x00989460` | 489 | VERIFIED | `Controller::Release` |
| ui | `ItemEffectVariantDispatcher` | `0x00B041D0` | 11776 | VERIFIED | `OnBalloonBunnyUpdate` |
| ui | `OnVariantDispatcher` | `0x00B32C90` | 21440 | VERIFIED | `OnZoomCamera + OnPinchMod + OnActivateMenusRequest + OnStoreRequest` |
| ui | `TextOverlayActionHandler` | `0x00B401A0` | 3712 | VERIFIED | `audioFile\|` |
| ui | `GrowtorialButton` | `0x00CC21F0` | 4370 | VERIFIED | `Error with add_commnty_growtorial_bttn parms` |
| ui | `DialogBuilder` | `0x00CFD640` | 30966 | VERIFIED | `Error with add_searchable_item_list parms` |
| ui | `CaptchaInputDialog` | `0x00D0CA90` | 7496 | VERIFIED | `\|CaptchaID\|` |
| ui | `OnButtonSelectedHandler` | `0x00D12740` | 4497 | VERIFIED | `OnButtonSelected` |
| ui | `BannerDialogBuilder` | `0x00D775D0` | 12770 | VERIFIED | `Error with add_banner parms` |
| ui | `Controller_PopController` | `0x00D8CAD0` | 544 | VERIFIED | `Controller::PopController` |
| ui | `Controller_PushController` | `0x00D8CCF0` | 721 | VERIFIED | `Controller::PushController` |
| ui | `Controller_Deactivate` | `0x00DC7D60` | 638 | VERIFIED | `Controller::Deactivate` |
| ui | `Controller_OnActivate` | `0x00DC8120` | 475 | VERIFIED | `Controller::OnActivate` |
| ui | `OnEventHandler` | `0x0106C640` | 3202 | VERIFIED | `OnEvent` |
| ui | `Controller_PushChildController` | `0x01091B70` | 690 | VERIFIED | `Controller::PushChildController` |
| ui | `InventoryTabUI` | `0x010B4B60` | 3392 | VERIFIED | `tabclothes\|` |
| ui | `UIController_OnActivate` | `0x010E5E20` | 1512 | VERIFIED | `UIController::OnActivate` |
| ui | `UIController_OnDeactivate` | `0x010E6410` | 622 | VERIFIED | `UIController::OnDeactivate` |
| ui | `UIController_RemoveScreenView` | `0x010E6690` | 1139 | VERIFIED | `UIController::RemoveScreenView` |
| ui | `OnOverMoveHandler` | `0x011BF6E0` | 5273 | VERIFIED | `OnOverMove` |
| ui | `EnableAllButtonsEntity` | `0x011E2FB0` | 1526 | VERIFIED | `EnableAllButtonsEntity() nullptr == pEnt` |
| ui | `LogDisplayEntityBuilder` | `0x011E6BA0` | 2351 | VERIFIED | `LogDisplayEntity` |
| ui | `OnFakeScrollToEntity` | `0x01225920` | 4626 | VERIFIED | `OnFakeScrollToEntity` |
| ui | `OnDeleteHandler` | `0x017178A0` | 1273 | VERIFIED | `OnDelete` |
| world | `TileCoordinateHandler` | `0x009B3180` | 228 | VERIFIED | `tileX == %d, tileY == %d` |
| world | `TileLookupGuard` | `0x009CA590` | 1184 | VERIFIED | `Error, no tile` |
| world | `TilesheetLoader` | `0x00A36DA0` | 832 | VERIFIED | `Error, tile(%d) haven't texture file` |
| world | `WorldLockText` | `0x00AFB5C0` | 13171 | VERIFIED | ` per World Lock` |
| world | `WorldVersionCheck` | `0x00B43830` | 17860 | VERIFIED | `ERROR: Wrong world version: %d, dataSize %d` |
| world | `WeatherEffectText` | `0x00C085F0` | 3273 | VERIFIED | `Replaces any other active Weather Effect.` |
| world | `TileDefinitionsLoader` | `0x00C2F070` | 15673 | VERIFIED | `Please wait, loading tile definitions...` |
| world | `BgItemMapValidator` | `0x00C62B80` | 435 | VERIFIED | `Removing illegal bg item %d from map %s` |
| world | `TileExtraParser` | `0x00C73C90` | 23652 | VERIFIED | `Bad type of %d detected in tileextra. WorldName: %s` |
| world | `WorldTileMap` | `0x00C8A060` | 1204 | VERIFIED | `WorldTileMap: size: %d, %d; count: %d` |
| world | `SeedTreeItemPath` | `0x00CED4B0` | 11101 | VERIFIED | `itemIDseed2tree_itemAmount` |
| world | `TilesheetPageLoader` | `0x00D0EE40` | 1057 | VERIFIED | `Error loading tiles_page2.rttex` |
| world | `WorldValidation` | `0x010FC3E0` | 616 | VERIFIED | `Validing World Now %s` |
| world | `WhiteDoorLookup` | `0x0145ED90` | 754 | VERIFIED | `White door missing from map %s` |
| world | `World_Load` | `0x0145F590` | 1095 | VERIFIED | `World::Load: Version %d. f: %d, Name: %s` |

---

## Part 2 - Script-binding metadata (RmlUi + Lua)

The only true `{name -> address}` metadata in the binary: 16-byte `{const char* name, void* fn}` rows. Every row below has a function pointer landing exactly on a `.pdata` function start.

> Property tables store **bare** names (`attributes`, `x`) - the `get_`/`set_` spelling seen in write-ups is an annotation, not shipped data. Names are unique per table, not globally: `x` belongs to both `Vector2f` and `Vector2i`.

| Table | Method | Offset (RVA) |
| ----- | ------ | ------------ |
| `0x01FACAB0` | `_G` | `0x015E6E40` |
| `0x01FACAB0` | `package` | `0x015F2200` |
| `0x01FACAB0` | `coroutine` | `0x015E74B0` |
| `0x01FACAB0` | `table` | `0x015E8420` |
| `0x01FACAB0` | `io` | `0x015E9C30` |
| `0x01FACAB0` | `os` | `0x015EA820` |
| `0x01FACAB0` | `string` | `0x015EE7A0` |
| `0x01FACAB0` | `math` | `0x015EFF60` |
| `0x01FACAB0` | `utf8` | `0x015EF100` |
| `0x01FACAB0` | `debug` | `0x015F13A0` |
| `0x01FAD750` | `assert` | `0x015E5DD0` |
| `0x01FAD750` | `collectgarbage` | `0x015E6780` |
| `0x01FAD750` | `dofile` | `0x015E5D40` |
| `0x01FAD750` | `error` | `0x015E6490` |
| `0x01FAD750` | `getmetatable` | `0x015E6510` |
| `0x01FAD750` | `ipairs` | `0x015E6B00` |
| `0x01FAD750` | `loadfile` | `0x015E6B50` |
| `0x01FAD750` | `load` | `0x015E5C40` |
| `0x01FAD750` | `next` | `0x015E6A00` |
| `0x01FAD750` | `pairs` | `0x015E6A60` |
| `0x01FAD750` | `pcall` | `0x015E5F70` |
| `0x01FAD750` | `print` | `0x015E6100` |
| `0x01FAD750` | `warn` | `0x015E61F0` |
| `0x01FAD750` | `rawequal` | `0x015E6620` |
| `0x01FAD750` | `rawlen` | `0x015E6670` |
| `0x01FAD750` | `rawget` | `0x015E66D0` |
| `0x01FAD750` | `rawset` | `0x015E6720` |
| `0x01FAD750` | `select` | `0x015E5EB0` |
| `0x01FAD750` | `setmetatable` | `0x015E6570` |
| `0x01FAD750` | `tonumber` | `0x015E62A0` |
| `0x01FAD750` | `tostring` | `0x015E60D0` |
| `0x01FAD750` | `type` | `0x015E69A0` |
| `0x01FAD750` | `xpcall` | `0x015E6010` |
| `0x01FADB80` | `create` | `0x015E6F70` |
| `0x01FADB80` | `resume` | `0x015E6EC0` |
| `0x01FADB80` | `running` | `0x015E7150` |
| `0x01FADB80` | `status` | `0x015E7070` |
| `0x01FADB80` | `wrap` | `0x015E6FD0` |
| `0x01FADB80` | `yield` | `0x015E7040` |
| `0x01FADB80` | `isyieldable` | `0x015E70E0` |
| `0x01FADB80` | `close` | `0x015E7180` |
| `0x01FADD80` | `concat` | `0x015E7A60` |
| `0x01FADD80` | `insert` | `0x015E7500` |
| `0x01FADD80` | `pack` | `0x015E7C90` |
| `0x01FADD80` | `unpack` | `0x015E7D40` |
| `0x01FADD80` | `remove` | `0x015E7690` |
| `0x01FADD80` | `move` | `0x015E7810` |
| `0x01FADD80` | `sort` | `0x015E7E30` |
| `0x01FADF10` | `close` | `0x015E8CC0` |
| `0x01FADF10` | `flush` | `0x015E8A70` |
| `0x01FADF10` | `input` | `0x015E8470` |
| `0x01FADF10` | `lines` | `0x015E85E0` |
| `0x01FADF10` | `open` | `0x015E8DB0` |
| `0x01FADF10` | `output` | `0x015E8500` |
| `0x01FADF10` | `popen` | `0x015E8EF0` |
| `0x01FADF10` | `read` | `0x015E8700` |
| `0x01FADF10` | `tmpfile` | `0x015E8FD0` |
| `0x01FADF10` | `type` | `0x015E8B80` |
| `0x01FADF10` | `write` | `0x015E87D0` |
| `0x01FADFD0` | `read` | `0x015E8770` |
| `0x01FADFD0` | `write` | `0x015E8840` |
| `0x01FADFD0` | `lines` | `0x015E8590` |
| `0x01FADFD0` | `flush` | `0x015E8B00` |
| `0x01FADFD0` | `seek` | `0x015E88B0` |
| `0x01FADFD0` | `close` | `0x015E8C50` |
| `0x01FADFD0` | `setvbuf` | `0x015E89A0` |
| `0x01FAE060` | `__gc` | `0x015E8D50` |
| `0x01FAE060` | `__close` | `0x015E8D50` |
| `0x01FAE060` | `__tostring` | `0x015E8BF0` |
| `0x01FAE3D0` | `clock` | `0x015EA590` |
| `0x01FAE3D0` | `date` | `0x015E9E40` |
| `0x01FAE3D0` | `difftime` | `0x015EA250` |
| `0x01FAE3D0` | `execute` | `0x015EA390` |
| `0x01FAE3D0` | `exit` | `0x015EA310` |
| `0x01FAE3D0` | `getenv` | `0x015EA550` |
| `0x01FAE3D0` | `remove` | `0x015EA400` |
| `0x01FAE3D0` | `rename` | `0x015EA460` |
| `0x01FAE3D0` | `setlocale` | `0x015EA2A0` |
| `0x01FAE3D0` | `time` | `0x015EA0C0` |
| `0x01FAE3D0` | `tmpname` | `0x015EA4E0` |
| `0x01FAE660` | `byte` | `0x015EAD40` |
| `0x01FAE660` | `char` | `0x015EAE60` |
| `0x01FAE660` | `dump` | `0x015EAF40` |
| `0x01FAE6A0` | `format` | `0x015EB470` |
| `0x01FAE6A0` | `gmatch` | `0x015EB110` |
| `0x01FAE6A0` | `gsub` | `0x015EB220` |
| `0x01FAE6A0` | `len` | `0x015EA870` |
| `0x01FAE6A0` | `lower` | `0x015EAA30` |
| `0x01FAE700` | `rep` | `0x015EABB0` |
| `0x01FAE700` | `reverse` | `0x015EA990` |
| `0x01FAE700` | `sub` | `0x015EA8A0` |
| `0x01FAE700` | `upper` | `0x015EAAF0` |
| `0x01FAE700` | `pack` | `0x015EBCB0` |
| `0x01FAE700` | `packsize` | `0x015EC380` |
| `0x01FAE700` | `unpack` | `0x015EC520` |
| `0x01FAED50` | `offset` | `0x015EED10` |
| `0x01FAED50` | `codepoint` | `0x015EE9E0` |
| `0x01FAED50` | `char` | `0x015EEBF0` |
| `0x01FAED50` | `len` | `0x015EE870` |
| `0x01FAED50` | `codes` | `0x015EEE90` |
| `0x01FAEE70` | `abs` | `0x015EF180` |
| `0x01FAEE70` | `acos` | `0x015EF2B0` |
| `0x01FAEE70` | `asin` | `0x015EF280` |
| `0x01FAEE70` | `atan` | `0x015EF2E0` |
| `0x01FAEE70` | `ceil` | `0x015EF420` |
| `0x01FAEE70` | `cos` | `0x015EF220` |
| `0x01FAEE70` | `deg` | `0x015EF7F0` |
| `0x01FAEE70` | `exp` | `0x015EF7C0` |
| `0x01FAEE70` | `tointeger` | `0x015EF340` |
| `0x01FAEE70` | `floor` | `0x015EF3A0` |
| `0x01FAEE70` | `fmod` | `0x015EF4A0` |
| `0x01FAEE70` | `ult` | `0x015EF6B0` |
| `0x01FAEE70` | `log` | `0x015EF700` |
| `0x01FAEE70` | `max` | `0x015EF910` |
| `0x01FAEE70` | `min` | `0x015EF870` |
| `0x01FAEE70` | `modf` | `0x015EF5A0` |
| `0x01FAEE70` | `rad` | `0x015EF830` |
| `0x01FAEE70` | `sin` | `0x015EF1F0` |
| `0x01FAEE70` | `sqrt` | `0x015EF670` |
| `0x01FAEE70` | `tan` | `0x015EF250` |
| `0x01FAEE70` | `type` | `0x015EF9B0` |
| `0x01FAF0F0` | `debug` | `0x015F1000` |
| `0x01FAF0F0` | `getuservalue` | `0x015F0160` |
| `0x01FAF0F0` | `gethook` | `0x015F0E80` |
| `0x01FAF0F0` | `getinfo` | `0x015F0260` |
| `0x01FAF0F0` | `getlocal` | `0x015F06F0` |
| `0x01FAF0F0` | `getregistry` | `0x015F00A0` |
| `0x01FAF0F0` | `getmetatable` | `0x015F00C0` |
| `0x01FAF0F0` | `getupvalue` | `0x015F09E0` |
| `0x01FAF0F0` | `upvaluejoin` | `0x015F0B70` |
| `0x01FAF0F0` | `upvalueid` | `0x015F0AF0` |
| `0x01FAF0F0` | `setuservalue` | `0x015F01E0` |
| `0x01FAF0F0` | `sethook` | `0x015F0C90` |
| `0x01FAF0F0` | `setlocal` | `0x015F0870` |
| `0x01FAF0F0` | `setmetatable` | `0x015F0100` |
| `0x01FAF0F0` | `setupvalue` | `0x015F0A60` |
| `0x01FAF0F0` | `traceback` | `0x015F11F0` |
| `0x01FAF0F0` | `setcstacklimit` | `0x015F12C0` |
| `0x024739E0` | `CreateContext` | `0x015BA5C0` |
| `0x024739E0` | `LoadFontFace` | `0x015BA6E0` |
| `0x024739E0` | `RegisterTag` | `0x015BA820` |
| `0x02473A20` | `contexts` | `0x015BA920` |
| `0x02473A20` | `key_identifier` | `0x015BA960` |
| `0x02473A20` | `key_modifier` | `0x015BA9A0` |
| `0x02473A60` | `red` | `0x015BC6B0` |
| `0x02473A60` | `green` | `0x015BC700` |
| `0x02473A60` | `blue` | `0x015BC750` |
| `0x02473A60` | `alpha` | `0x015BC7A0` |
| `0x02473A60` | `rgba` | `0x015BC7F0` |
| `0x02473AC0` | `red` | `0x015BC870` |
| `0x02473AC0` | `green` | `0x015BC8D0` |
| `0x02473AC0` | `blue` | `0x015BC930` |
| `0x02473AC0` | `alpha` | `0x015BC990` |
| `0x02473AC0` | `rgba` | `0x015BC9F0` |
| `0x02473B20` | `red` | `0x015BD0C0` |
| `0x02473B20` | `green` | `0x015BD110` |
| `0x02473B20` | `blue` | `0x015BD160` |
| `0x02473B20` | `alpha` | `0x015BD1B0` |
| `0x02473B20` | `rgba` | `0x015BD200` |
| `0x02473B80` | `red` | `0x015BD290` |
| `0x02473B80` | `green` | `0x015BD300` |
| `0x02473B80` | `blue` | `0x015BD370` |
| `0x02473B80` | `alpha` | `0x015BD3E0` |
| `0x02473B80` | `rgba` | `0x015BD450` |
| `0x02473BE0` | `AddEventListener` | `0x015BDDA0` |
| `0x02473BE0` | `CreateDocument` | `0x015BE2B0` |
| `0x02473BE0` | `LoadDocument` | `0x015BE3C0` |
| `0x02473BE0` | `Render` | `0x015BE4B0` |
| `0x02473BE0` | `UnloadAllDocuments` | `0x015BE4E0` |
| `0x02473BE0` | `UnloadDocument` | `0x015BE500` |
| `0x02473BE0` | `Update` | `0x015BE540` |
| `0x02473BE0` | `OpenDataModel` | `0x015BD950` |
| `0x02473BE0` | `ProcessMouseMove` | `0x015BD990` |
| `0x02473BE0` | `ProcessMouseButtonDown` | `0x015BDA10` |
| `0x02473BE0` | `ProcessMouseButtonUp` | `0x015BDA70` |
| `0x02473BE0` | `ProcessMouseWheel` | `0x015BDAD0` |
| `0x02473BE0` | `ProcessMouseLeave` | `0x015BDB40` |
| `0x02473BE0` | `IsMouseInteracting` | `0x015BDB70` |
| `0x02473BE0` | `ProcessKeyDown` | `0x015BDBA0` |
| `0x02473BE0` | `ProcessKeyUp` | `0x015BDC00` |
| `0x02473BE0` | `ProcessTextInput` | `0x015BDC60` |
| `0x02473D00` | `dimensions` | `0x015BE570` |
| `0x02473D00` | `documents` | `0x015BE5E0` |
| `0x02473D00` | `dp_ratio` | `0x015BE650` |
| `0x02473D00` | `focus_element` | `0x015BE690` |
| `0x02473D00` | `hover_element` | `0x015BE6F0` |
| `0x02473D00` | `name` | `0x015BE750` |
| `0x02473D00` | `root_element` | `0x015BE7B0` |
| `0x02473DD0` | `PullToFront` | `0x015BF480` |
| `0x02473DD0` | `PushToBack` | `0x015BF4A0` |
| `0x02473DD0` | `Show` | `0x015BF4C0` |
| `0x02473DD0` | `Hide` | `0x015BF540` |
| `0x02473DD0` | `Close` | `0x015BF560` |
| `0x02473DD0` | `CreateElement` | `0x015BF580` |
| `0x02473DD0` | `CreateTextNode` | `0x015BF6F0` |
| `0x02473EA0` | `AddEventListener` | `0x015C00D0` |
| `0x02473EA0` | `AppendChild` | `0x015C0330` |
| `0x02473EA0` | `Blur` | `0x015C0430` |
| `0x02473EA0` | `Click` | `0x015C0450` |
| `0x02473EA0` | `DispatchEvent` | `0x015C0470` |
| `0x02473EA0` | `Focus` | `0x015C09C0` |
| `0x02473EA0` | `GetAttribute` | `0x015C09E0` |
| `0x02473EA0` | `GetElementById` | `0x015C0AD0` |
| `0x02473EA0` | `GetElementsByTagName` | `0x015C0BC0` |
| `0x02473EA0` | `QuerySelector` | `0x015C0ED0` |
| `0x02473EA0` | `QuerySelectorAll` | `0x015C0FC0` |
| `0x02473EA0` | `Matches` | `0x015C12D0` |
| `0x02473EA0` | `HasAttribute` | `0x015C13A0` |
| `0x02473EA0` | `HasChildNodes` | `0x015C1470` |
| `0x02473EA0` | `InsertBefore` | `0x015C14A0` |
| `0x02473EA0` | `IsClassSet` | `0x015C15C0` |
| `0x02473EA0` | `RemoveAttribute` | `0x015C1690` |
| `0x02473EA0` | `RemoveChild` | `0x015C1750` |
| `0x02473EA0` | `ReplaceChild` | `0x015C17C0` |
| `0x02473EA0` | `ScrollIntoView` | `0x015C18F0` |
| `0x02473EA0` | `SetAttribute` | `0x015C1920` |
| `0x02473EA0` | `SetClass` | `0x015C1A90` |
| `0x02474010` | `attributes` | `0x015C1B80` |
| `0x02474010` | `child_nodes` | `0x015C1BF0` |
| `0x02474010` | `class_name` | `0x015C1C60` |
| `0x02474010` | `client_left` | `0x015C1D20` |
| `0x02474010` | `client_height` | `0x015C1D80` |
| `0x02474010` | `client_top` | `0x015C1DE0` |
| `0x02474010` | `client_width` | `0x015C1E40` |
| `0x02474010` | `first_child` | `0x015C1EA0` |
| `0x02474010` | `id` | `0x015C1F00` |
| `0x02474010` | `inner_rml` | `0x015C1F60` |
| `0x02474010` | `last_child` | `0x015C2010` |
| `0x02474010` | `next_sibling` | `0x015C2070` |
| `0x02474010` | `offset_height` | `0x015C20D0` |
| `0x02474010` | `offset_left` | `0x015C2130` |
| `0x02474010` | `offset_parent` | `0x015C2190` |
| `0x02474010` | `offset_top` | `0x015C21F0` |
| `0x02474010` | `offset_width` | `0x015C2250` |
| `0x02474010` | `owner_document` | `0x015C22B0` |
| `0x02474010` | `parent_node` | `0x015C2310` |
| `0x02474010` | `previous_sibling` | `0x015C2370` |
| `0x02474010` | `scroll_height` | `0x015C23D0` |
| `0x02474010` | `scroll_left` | `0x015C2430` |
| `0x02474010` | `scroll_top` | `0x015C2490` |
| `0x02474010` | `scroll_width` | `0x015C24F0` |
| `0x02474010` | `style` | `0x015C2550` |
| `0x02474010` | `tag_name` | `0x015C25C0` |
| `0x024741C0` | `class_name` | `0x015C2620` |
| `0x024741C0` | `id` | `0x015C2710` |
| `0x024741C0` | `inner_rml` | `0x015C2800` |
| `0x024741C0` | `scroll_left` | `0x015C2900` |
| `0x024741C0` | `scroll_top` | `0x015C2970` |
| `0x024742F0` | `current_element` | `0x015C4920` |
| `0x024742F0` | `type` | `0x015C4980` |
| `0x024742F0` | `target_element` | `0x015C4B60` |
| `0x024742F0` | `parameters` | `0x015C4BC0` |
| `0x02474340` | `DotProduct` | `0x015C5950` |
| `0x02474340` | `Normalise` | `0x015C59C0` |
| `0x02474340` | `Rotate` | `0x015C5A70` |
| `0x02474380` | `x` | `0x015C5B40` |
| `0x02474380` | `y` | `0x015C5B90` |
| `0x02474380` | `magnitude` | `0x015C5BE0` |
| `0x024743F0` | `x` | `0x015C6440` |
| `0x024743F0` | `y` | `0x015C6490` |
| `0x024743F0` | `magnitude` | `0x015C64E0` |
| `0x02474480` | `disabled` | `0x015C7010` |
| `0x02474480` | `name` | `0x015C7060` |
| `0x02474480` | `value` | `0x015C7110` |
| `0x024744C0` | `disabled` | `0x015C71D0` |
| `0x024744C0` | `name` | `0x015C7240` |
| `0x024744C0` | `value` | `0x015C7330` |
| `0x02474500` | `Select` | `0x015C7780` |
| `0x02474500` | `SetSelection` | `0x015C77A0` |
| `0x02474500` | `GetSelection` | `0x015C77F0` |
| `0x02474540` | `checked` | `0x015C78D0` |
| `0x02474540` | `maxlength` | `0x015C79C0` |
| `0x02474540` | `size` | `0x015C7AC0` |
| `0x02474540` | `max` | `0x015C7BB0` |
| `0x02474540` | `min` | `0x015C7CA0` |
| `0x02474540` | `step` | `0x015C7D90` |
| `0x024745B0` | `checked` | `0x015C7E80` |
| `0x024745B0` | `maxlength` | `0x015C7FE0` |
| `0x024745B0` | `size` | `0x015C80E0` |
| `0x024745B0` | `max` | `0x015C81D0` |
| `0x024745B0` | `min` | `0x015C82D0` |
| `0x024745B0` | `step` | `0x015C83D0` |
| `0x02474620` | `Add` | `0x015C89B0` |
| `0x02474620` | `Remove` | `0x015C8B60` |
| `0x02474620` | `RemoveAll` | `0x015C8CB0` |
| `0x024746B0` | `Select` | `0x015C9210` |
| `0x024746B0` | `SetSelection` | `0x015C9230` |
| `0x024746B0` | `GetSelection` | `0x015C9280` |
| `0x024746F0` | `cols` | `0x015C9360` |
| `0x024746F0` | `maxlength` | `0x015C93B0` |
| `0x024746F0` | `rows` | `0x015C9400` |
| `0x024746F0` | `wordwrap` | `0x015C9450` |
| `0x02474740` | `cols` | `0x015C94A0` |
| `0x02474740` | `maxlength` | `0x015C9500` |
| `0x02474740` | `rows` | `0x015C9560` |
| `0x02474740` | `wordwrap` | `0x015C95C0` |

---

## Small Info

**These RVAs are per-build.** Growtopia re-randomises layout on every update, so they must be re-derived each time - which is what this repo automates. Never hardcode them; re-read this file after each release.

I Wish they could fix bots bruh
