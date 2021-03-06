
//----------------------------------------
// 代码由GenlibVcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Button_Create(AOwner: TComponent): TButton; stdcall;
begin
  Result :=  TButton.Create(AOwner);
end;

procedure Button_Free(AObj: TButton); stdcall;
begin
  AObj.Free;
end;

procedure Button_Click(AObj: TButton); stdcall;
begin
  AObj.Click;
end;

function Button_CanFocus(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.CanFocus;
end;

function Button_ContainsControl(AObj: TButton; Control: TControl): LongBool; stdcall;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function Button_ControlAtPos(AObj: TButton; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool; AllLevels: LongBool): TControl; stdcall;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls, AllLevels);
end;

procedure Button_DisableAlign(AObj: TButton); stdcall;
begin
  AObj.DisableAlign;
end;

procedure Button_EnableAlign(AObj: TButton); stdcall;
begin
  AObj.EnableAlign;
end;

function Button_FindChildControl(AObj: TButton; ControlName: PChar): TControl; stdcall;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure Button_FlipChildren(AObj: TButton; AllLevels: LongBool); stdcall;
begin
  AObj.FlipChildren(AllLevels);
end;

function Button_Focused(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Focused;
end;

function Button_HandleAllocated(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Button_InsertControl(AObj: TButton; AControl: TControl); stdcall;
begin
  AObj.InsertControl(AControl);
end;

procedure Button_Invalidate(AObj: TButton); stdcall;
begin
  AObj.Invalidate;
end;

procedure Button_PaintTo(AObj: TButton; DC: HDC; X: Integer; Y: Integer); stdcall;
begin
  AObj.PaintTo(DC, X, Y);
end;

procedure Button_RemoveControl(AObj: TButton; AControl: TControl); stdcall;
begin
  AObj.RemoveControl(AControl);
end;

procedure Button_Realign(AObj: TButton); stdcall;
begin
  AObj.Realign;
end;

procedure Button_Repaint(AObj: TButton); stdcall;
begin
  AObj.Repaint;
end;

procedure Button_ScaleBy(AObj: TButton; M: Integer; D: Integer); stdcall;
begin
  AObj.ScaleBy(M, D);
end;

procedure Button_ScrollBy(AObj: TButton; DeltaX: Integer; DeltaY: Integer); stdcall;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure Button_SetBounds(AObj: TButton; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); stdcall;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Button_SetFocus(AObj: TButton); stdcall;
begin
  AObj.SetFocus;
end;

procedure Button_Update(AObj: TButton); stdcall;
begin
  AObj.Update;
end;

procedure Button_UpdateControlState(AObj: TButton); stdcall;
begin
  AObj.UpdateControlState;
end;

procedure Button_BringToFront(AObj: TButton); stdcall;
begin
  AObj.BringToFront;
end;

procedure Button_ClientToScreen(AObj: TButton; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Button_ClientToParent(AObj: TButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Button_Dragging(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Dragging;
end;

function Button_HasParent(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure Button_Hide(AObj: TButton); stdcall;
begin
  AObj.Hide;
end;

function Button_Perform(AObj: TButton; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; stdcall;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Button_Refresh(AObj: TButton); stdcall;
begin
  AObj.Refresh;
end;

procedure Button_ScreenToClient(AObj: TButton; var Point: TPoint; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Button_ParentToClient(AObj: TButton; var Point: TPoint; AParent: TWinControl; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Button_SendToBack(AObj: TButton); stdcall;
begin
  AObj.SendToBack;
end;

procedure Button_Show(AObj: TButton); stdcall;
begin
  AObj.Show;
end;

function Button_GetTextBuf(AObj: TButton; Buffer: PWideChar; BufSize: Integer): Integer; stdcall;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Button_GetTextLen(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.GetTextLen;
end;

procedure Button_SetTextBuf(AObj: TButton; Buffer: PWideChar); stdcall;
begin
  AObj.SetTextBuf(Buffer);
end;

function Button_FindComponent(AObj: TButton; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Button_GetNamePath(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Button_Assign(AObj: TButton; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure Button_DisposeOf(AObj: TButton); stdcall;
begin
  AObj.DisposeOf;
end;

function Button_ClassType(AObj: TButton): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function Button_ClassName(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function Button_InstanceSize(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function Button_InheritsFrom(AObj: TButton; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Button_Equals(AObj: TButton; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function Button_GetHashCode(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function Button_ToString(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function Button_GetAction(AObj: TButton): TBasicAction; stdcall;
begin
  Result :=  AObj.Action;
end;

procedure Button_SetAction(AObj: TButton; AValue: TBasicAction); stdcall;
begin
  AObj.Action := AValue;
end;

function Button_GetAlign(AObj: TButton): TAlign; stdcall;
begin
  Result :=  AObj.Align;
end;

procedure Button_SetAlign(AObj: TButton; AValue: TAlign); stdcall;
begin
  AObj.Align := AValue;
end;

function Button_GetAnchors(AObj: TButton): TAnchors; stdcall;
begin
  Result :=  AObj.Anchors;
end;

procedure Button_SetAnchors(AObj: TButton; AValue: TAnchors); stdcall;
begin
  AObj.Anchors := AValue;
end;

function Button_GetBiDiMode(AObj: TButton): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Button_SetBiDiMode(AObj: TButton; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function Button_GetCancel(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Cancel;
end;

procedure Button_SetCancel(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.Cancel := AValue;
end;

function Button_GetCaption(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure Button_SetCaption(AObj: TButton; AValue: PChar); stdcall;
begin
  AObj.Caption := AValue;
end;

function Button_GetCommandLinkHint(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.CommandLinkHint);
end;

procedure Button_SetCommandLinkHint(AObj: TButton; AValue: PChar); stdcall;
begin
  AObj.CommandLinkHint := AValue;
end;

function Button_GetConstraints(AObj: TButton): TSizeConstraints; stdcall;
begin
  Result :=  AObj.Constraints;
end;

procedure Button_SetConstraints(AObj: TButton; AValue: TSizeConstraints); stdcall;
begin
  AObj.Constraints := AValue;
end;

function Button_GetDefault(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Default;
end;

procedure Button_SetDefault(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.Default := AValue;
end;

function Button_GetDisabledImageIndex(AObj: TButton): TImageIndex; stdcall;
begin
  Result :=  AObj.DisabledImageIndex;
end;

procedure Button_SetDisabledImageIndex(AObj: TButton; AValue: TImageIndex); stdcall;
begin
  AObj.DisabledImageIndex := AValue;
end;

function Button_GetDoubleBuffered(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Button_SetDoubleBuffered(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.DoubleBuffered := AValue;
end;

function Button_GetDragCursor(AObj: TButton): TCursor; stdcall;
begin
  Result :=  AObj.DragCursor;
end;

procedure Button_SetDragCursor(AObj: TButton; AValue: TCursor); stdcall;
begin
  AObj.DragCursor := AValue;
end;

function Button_GetDragKind(AObj: TButton): TDragKind; stdcall;
begin
  Result :=  AObj.DragKind;
end;

procedure Button_SetDragKind(AObj: TButton; AValue: TDragKind); stdcall;
begin
  AObj.DragKind := AValue;
end;

function Button_GetDragMode(AObj: TButton): TDragMode; stdcall;
begin
  Result :=  AObj.DragMode;
end;

procedure Button_SetDragMode(AObj: TButton; AValue: TDragMode); stdcall;
begin
  AObj.DragMode := AValue;
end;

function Button_GetElevationRequired(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.ElevationRequired;
end;

procedure Button_SetElevationRequired(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.ElevationRequired := AValue;
end;

function Button_GetEnabled(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Enabled;
end;

procedure Button_SetEnabled(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.Enabled := AValue;
end;

function Button_GetFont(AObj: TButton): TFont; stdcall;
begin
  Result :=  AObj.Font;
end;

procedure Button_SetFont(AObj: TButton; AValue: TFont); stdcall;
begin
  AObj.Font := AValue;
end;

function Button_GetHotImageIndex(AObj: TButton): TImageIndex; stdcall;
begin
  Result :=  AObj.HotImageIndex;
end;

procedure Button_SetHotImageIndex(AObj: TButton; AValue: TImageIndex); stdcall;
begin
  AObj.HotImageIndex := AValue;
end;

function Button_GetImageAlignment(AObj: TButton): TImageAlignment; stdcall;
begin
  Result :=  AObj.ImageAlignment;
end;

procedure Button_SetImageAlignment(AObj: TButton; AValue: TImageAlignment); stdcall;
begin
  AObj.ImageAlignment := AValue;
end;

function Button_GetImageIndex(AObj: TButton): TImageIndex; stdcall;
begin
  Result :=  AObj.ImageIndex;
end;

procedure Button_SetImageIndex(AObj: TButton; AValue: TImageIndex); stdcall;
begin
  AObj.ImageIndex := AValue;
end;

function Button_GetImages(AObj: TButton): TCustomImageList; stdcall;
begin
  Result :=  AObj.Images;
end;

procedure Button_SetImages(AObj: TButton; AValue: TCustomImageList); stdcall;
begin
  AObj.Images := AValue;
end;

function Button_GetModalResult(AObj: TButton): TModalResult; stdcall;
begin
  Result :=  AObj.ModalResult;
end;

procedure Button_SetModalResult(AObj: TButton; AValue: TModalResult); stdcall;
begin
  AObj.ModalResult := AValue;
end;

function Button_GetParentDoubleBuffered(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure Button_SetParentDoubleBuffered(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function Button_GetParentFont(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentFont;
end;

procedure Button_SetParentFont(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.ParentFont := AValue;
end;

function Button_GetParentShowHint(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure Button_SetParentShowHint(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.ParentShowHint := AValue;
end;

function Button_GetPopupMenu(AObj: TButton): TPopupMenu; stdcall;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Button_SetPopupMenu(AObj: TButton; AValue: TPopupMenu); stdcall;
begin
  AObj.PopupMenu := AValue;
end;

function Button_GetPressedImageIndex(AObj: TButton): TImageIndex; stdcall;
begin
  Result :=  AObj.PressedImageIndex;
end;

procedure Button_SetPressedImageIndex(AObj: TButton; AValue: TImageIndex); stdcall;
begin
  AObj.PressedImageIndex := AValue;
end;

function Button_GetSelectedImageIndex(AObj: TButton): TImageIndex; stdcall;
begin
  Result :=  AObj.SelectedImageIndex;
end;

procedure Button_SetSelectedImageIndex(AObj: TButton; AValue: TImageIndex); stdcall;
begin
  AObj.SelectedImageIndex := AValue;
end;

function Button_GetShowHint(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.ShowHint;
end;

procedure Button_SetShowHint(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.ShowHint := AValue;
end;

function Button_GetStyle(AObj: TButton): TCustomButton.TButtonStyle; stdcall;
begin
  Result :=  AObj.Style;
end;

procedure Button_SetStyle(AObj: TButton; AValue: TCustomButton.TButtonStyle); stdcall;
begin
  AObj.Style := AValue;
end;

function Button_GetStylusHotImageIndex(AObj: TButton): TImageIndex; stdcall;
begin
  Result :=  AObj.StylusHotImageIndex;
end;

procedure Button_SetStylusHotImageIndex(AObj: TButton; AValue: TImageIndex); stdcall;
begin
  AObj.StylusHotImageIndex := AValue;
end;

function Button_GetTabOrder(AObj: TButton): TTabOrder; stdcall;
begin
  Result :=  AObj.TabOrder;
end;

procedure Button_SetTabOrder(AObj: TButton; AValue: TTabOrder); stdcall;
begin
  AObj.TabOrder := AValue;
end;

function Button_GetTabStop(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.TabStop;
end;

procedure Button_SetTabStop(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.TabStop := AValue;
end;

function Button_GetVisible(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Visible;
end;

procedure Button_SetVisible(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.Visible := AValue;
end;

function Button_GetWordWrap(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.WordWrap;
end;

procedure Button_SetWordWrap(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.WordWrap := AValue;
end;

function Button_GetStyleElements(AObj: TButton): TStyleElements; stdcall;
begin
  Result :=  AObj.StyleElements;
end;

procedure Button_SetStyleElements(AObj: TButton; AValue: TStyleElements); stdcall;
begin
  AObj.StyleElements := AValue;
end;

procedure Button_SetOnClick(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnClick := nil;
    TEventClass.Remove(AObj, @TEventClass.OnClick);
    Exit;
  end;
  AObj.OnClick := TEventClass.OnClick;
  TEventClass.Add(AObj, @TEventClass.OnClick, AEventId);
end;

procedure Button_SetOnContextPopup(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnContextPopup := nil;
    TEventClass.Remove(AObj, @TEventClass.OnContextPopup);
    Exit;
  end;
  AObj.OnContextPopup := TEventClass.OnContextPopup;
  TEventClass.Add(AObj, @TEventClass.OnContextPopup, AEventId);
end;

procedure Button_SetOnDragDrop(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragDrop := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragDrop);
    Exit;
  end;
  AObj.OnDragDrop := TEventClass.OnDragDrop;
  TEventClass.Add(AObj, @TEventClass.OnDragDrop, AEventId);
end;

procedure Button_SetOnDragOver(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnDragOver := nil;
    TEventClass.Remove(AObj, @TEventClass.OnDragOver);
    Exit;
  end;
  AObj.OnDragOver := TEventClass.OnDragOver;
  TEventClass.Add(AObj, @TEventClass.OnDragOver, AEventId);
end;

procedure Button_SetOnEndDock(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDock);
    Exit;
  end;
  AObj.OnEndDock := TEventClass.OnEndDock;
  TEventClass.Add(AObj, @TEventClass.OnEndDock, AEventId);
end;

procedure Button_SetOnEndDrag(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEndDrag := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEndDrag);
    Exit;
  end;
  AObj.OnEndDrag := TEventClass.OnEndDrag;
  TEventClass.Add(AObj, @TEventClass.OnEndDrag, AEventId);
end;

procedure Button_SetOnEnter(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnEnter);
    Exit;
  end;
  AObj.OnEnter := TEventClass.OnEnter;
  TEventClass.Add(AObj, @TEventClass.OnEnter, AEventId);
end;

procedure Button_SetOnExit(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnExit := nil;
    TEventClass.Remove(AObj, @TEventClass.OnExit);
    Exit;
  end;
  AObj.OnExit := TEventClass.OnExit;
  TEventClass.Add(AObj, @TEventClass.OnExit, AEventId);
end;

procedure Button_SetOnKeyDown(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyDown);
    Exit;
  end;
  AObj.OnKeyDown := TEventClass.OnKeyDown;
  TEventClass.Add(AObj, @TEventClass.OnKeyDown, AEventId);
end;

procedure Button_SetOnKeyPress(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyPress := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyPress);
    Exit;
  end;
  AObj.OnKeyPress := TEventClass.OnKeyPress;
  TEventClass.Add(AObj, @TEventClass.OnKeyPress, AEventId);
end;

procedure Button_SetOnKeyUp(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnKeyUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnKeyUp);
    Exit;
  end;
  AObj.OnKeyUp := TEventClass.OnKeyUp;
  TEventClass.Add(AObj, @TEventClass.OnKeyUp, AEventId);
end;

procedure Button_SetOnMouseActivate(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseActivate := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseActivate);
    Exit;
  end;
  AObj.OnMouseActivate := TEventClass.OnMouseActivate;
  TEventClass.Add(AObj, @TEventClass.OnMouseActivate, AEventId);
end;

procedure Button_SetOnMouseDown(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseDown := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseDown);
    Exit;
  end;
  AObj.OnMouseDown := TEventClass.OnMouseDown;
  TEventClass.Add(AObj, @TEventClass.OnMouseDown, AEventId);
end;

procedure Button_SetOnMouseEnter(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseEnter := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseEnter);
    Exit;
  end;
  AObj.OnMouseEnter := TEventClass.OnMouseEnter;
  TEventClass.Add(AObj, @TEventClass.OnMouseEnter, AEventId);
end;

procedure Button_SetOnMouseLeave(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseLeave := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseLeave);
    Exit;
  end;
  AObj.OnMouseLeave := TEventClass.OnMouseLeave;
  TEventClass.Add(AObj, @TEventClass.OnMouseLeave, AEventId);
end;

procedure Button_SetOnMouseMove(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseMove := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseMove);
    Exit;
  end;
  AObj.OnMouseMove := TEventClass.OnMouseMove;
  TEventClass.Add(AObj, @TEventClass.OnMouseMove, AEventId);
end;

procedure Button_SetOnMouseUp(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnMouseUp := nil;
    TEventClass.Remove(AObj, @TEventClass.OnMouseUp);
    Exit;
  end;
  AObj.OnMouseUp := TEventClass.OnMouseUp;
  TEventClass.Add(AObj, @TEventClass.OnMouseUp, AEventId);
end;

procedure Button_SetOnStartDock(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnStartDock := nil;
    TEventClass.Remove(AObj, @TEventClass.OnStartDock);
    Exit;
  end;
  AObj.OnStartDock := TEventClass.OnStartDock;
  TEventClass.Add(AObj, @TEventClass.OnStartDock, AEventId);
end;

function Button_GetDockClientCount(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.DockClientCount;
end;

function Button_GetDockSite(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.DockSite;
end;

procedure Button_SetDockSite(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.DockSite := AValue;
end;

function Button_GetAlignDisabled(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.AlignDisabled;
end;

function Button_GetMouseInClient(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.MouseInClient;
end;

function Button_GetVisibleDockClientCount(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function Button_GetBrush(AObj: TButton): TBrush; stdcall;
begin
  Result :=  AObj.Brush;
end;

function Button_GetControlCount(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ControlCount;
end;

function Button_GetHandle(AObj: TButton): HWND; stdcall;
begin
  Result :=  AObj.Handle;
end;

function Button_GetParentWindow(AObj: TButton): HWND; stdcall;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Button_SetParentWindow(AObj: TButton; AValue: HWND); stdcall;
begin
  AObj.ParentWindow := AValue;
end;

function Button_GetUseDockManager(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.UseDockManager;
end;

procedure Button_SetUseDockManager(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.UseDockManager := AValue;
end;

procedure Button_GetBoundsRect(AObj: TButton; var Result: TRect); stdcall;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Button_SetBoundsRect(AObj: TButton; var AValue: TRect); stdcall;
begin
  AObj.BoundsRect := AValue;
end;

function Button_GetClientHeight(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Button_SetClientHeight(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.ClientHeight := AValue;
end;

procedure Button_GetClientOrigin(AObj: TButton; var Result: TPoint); stdcall;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure Button_GetClientRect(AObj: TButton; var Result: TRect); stdcall;
begin
  Result :=  AObj.ClientRect;
end;

function Button_GetClientWidth(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Button_SetClientWidth(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.ClientWidth := AValue;
end;

function Button_GetControlState(AObj: TButton): TControlState; stdcall;
begin
  Result :=  AObj.ControlState;
end;

procedure Button_SetControlState(AObj: TButton; AValue: TControlState); stdcall;
begin
  AObj.ControlState := AValue;
end;

function Button_GetControlStyle(AObj: TButton): TControlStyle; stdcall;
begin
  Result :=  AObj.ControlStyle;
end;

procedure Button_SetControlStyle(AObj: TButton; AValue: TControlStyle); stdcall;
begin
  AObj.ControlStyle := AValue;
end;

function Button_GetExplicitLeft(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitLeft;
end;

function Button_GetExplicitTop(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitTop;
end;

function Button_GetExplicitWidth(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitWidth;
end;

function Button_GetExplicitHeight(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ExplicitHeight;
end;

function Button_GetFloating(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.Floating;
end;

function Button_GetParent(AObj: TButton): TWinControl; stdcall;
begin
  Result :=  AObj.Parent;
end;

procedure Button_SetParent(AObj: TButton; AValue: TWinControl); stdcall;
begin
  AObj.Parent := AValue;
end;

procedure Button_SetOnGesture(AObj: TButton; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnGesture := nil;
    TEventClass.Remove(AObj, @TEventClass.OnGesture);
    Exit;
  end;
  AObj.OnGesture := TEventClass.OnGesture;
  TEventClass.Add(AObj, @TEventClass.OnGesture, AEventId);
end;

function Button_GetAlignWithMargins(AObj: TButton): LongBool; stdcall;
begin
  Result :=  AObj.AlignWithMargins;
end;

procedure Button_SetAlignWithMargins(AObj: TButton; AValue: LongBool); stdcall;
begin
  AObj.AlignWithMargins := AValue;
end;

function Button_GetLeft(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.Left;
end;

procedure Button_SetLeft(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.Left := AValue;
end;

function Button_GetTop(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.Top;
end;

procedure Button_SetTop(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.Top := AValue;
end;

function Button_GetWidth(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.Width;
end;

procedure Button_SetWidth(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.Width := AValue;
end;

function Button_GetHeight(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.Height;
end;

procedure Button_SetHeight(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.Height := AValue;
end;

function Button_GetCursor(AObj: TButton): TCursor; stdcall;
begin
  Result :=  AObj.Cursor;
end;

procedure Button_SetCursor(AObj: TButton; AValue: TCursor); stdcall;
begin
  AObj.Cursor := AValue;
end;

function Button_GetHint(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Button_SetHint(AObj: TButton; AValue: PChar); stdcall;
begin
  AObj.Hint := AValue;
end;

function Button_GetMargins(AObj: TButton): TMargins; stdcall;
begin
  Result :=  AObj.Margins;
end;

procedure Button_SetMargins(AObj: TButton; AValue: TMargins); stdcall;
begin
  AObj.Margins := AValue;
end;

function Button_GetCustomHint(AObj: TButton): TCustomHint; stdcall;
begin
  Result :=  AObj.CustomHint;
end;

procedure Button_SetCustomHint(AObj: TButton; AValue: TCustomHint); stdcall;
begin
  AObj.CustomHint := AValue;
end;

function Button_GetComponentCount(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function Button_GetComponentIndex(AObj: TButton): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Button_SetComponentIndex(AObj: TButton; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function Button_GetOwner(AObj: TButton): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function Button_GetName(AObj: TButton): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Button_SetName(AObj: TButton; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function Button_GetTag(AObj: TButton): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure Button_SetTag(AObj: TButton; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function Button_GetDockClients(AObj: TButton; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.DockClients[Index];
end;

function Button_GetControls(AObj: TButton; Index: Integer): TControl; stdcall;
begin
  Result :=  AObj.Controls[Index];
end;

function Button_GetComponents(AObj: TButton; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function Button_StaticClassType: TClass; stdcall;
begin
  Result := TButton;
end;

exports
  Button_Create,
  Button_Free,
  Button_Click,
  Button_CanFocus,
  Button_ContainsControl,
  Button_ControlAtPos,
  Button_DisableAlign,
  Button_EnableAlign,
  Button_FindChildControl,
  Button_FlipChildren,
  Button_Focused,
  Button_HandleAllocated,
  Button_InsertControl,
  Button_Invalidate,
  Button_PaintTo,
  Button_RemoveControl,
  Button_Realign,
  Button_Repaint,
  Button_ScaleBy,
  Button_ScrollBy,
  Button_SetBounds,
  Button_SetFocus,
  Button_Update,
  Button_UpdateControlState,
  Button_BringToFront,
  Button_ClientToScreen,
  Button_ClientToParent,
  Button_Dragging,
  Button_HasParent,
  Button_Hide,
  Button_Perform,
  Button_Refresh,
  Button_ScreenToClient,
  Button_ParentToClient,
  Button_SendToBack,
  Button_Show,
  Button_GetTextBuf,
  Button_GetTextLen,
  Button_SetTextBuf,
  Button_FindComponent,
  Button_GetNamePath,
  Button_Assign,
  Button_DisposeOf,
  Button_ClassType,
  Button_ClassName,
  Button_InstanceSize,
  Button_InheritsFrom,
  Button_Equals,
  Button_GetHashCode,
  Button_ToString,
  Button_GetAction,
  Button_SetAction,
  Button_GetAlign,
  Button_SetAlign,
  Button_GetAnchors,
  Button_SetAnchors,
  Button_GetBiDiMode,
  Button_SetBiDiMode,
  Button_GetCancel,
  Button_SetCancel,
  Button_GetCaption,
  Button_SetCaption,
  Button_GetCommandLinkHint,
  Button_SetCommandLinkHint,
  Button_GetConstraints,
  Button_SetConstraints,
  Button_GetDefault,
  Button_SetDefault,
  Button_GetDisabledImageIndex,
  Button_SetDisabledImageIndex,
  Button_GetDoubleBuffered,
  Button_SetDoubleBuffered,
  Button_GetDragCursor,
  Button_SetDragCursor,
  Button_GetDragKind,
  Button_SetDragKind,
  Button_GetDragMode,
  Button_SetDragMode,
  Button_GetElevationRequired,
  Button_SetElevationRequired,
  Button_GetEnabled,
  Button_SetEnabled,
  Button_GetFont,
  Button_SetFont,
  Button_GetHotImageIndex,
  Button_SetHotImageIndex,
  Button_GetImageAlignment,
  Button_SetImageAlignment,
  Button_GetImageIndex,
  Button_SetImageIndex,
  Button_GetImages,
  Button_SetImages,
  Button_GetModalResult,
  Button_SetModalResult,
  Button_GetParentDoubleBuffered,
  Button_SetParentDoubleBuffered,
  Button_GetParentFont,
  Button_SetParentFont,
  Button_GetParentShowHint,
  Button_SetParentShowHint,
  Button_GetPopupMenu,
  Button_SetPopupMenu,
  Button_GetPressedImageIndex,
  Button_SetPressedImageIndex,
  Button_GetSelectedImageIndex,
  Button_SetSelectedImageIndex,
  Button_GetShowHint,
  Button_SetShowHint,
  Button_GetStyle,
  Button_SetStyle,
  Button_GetStylusHotImageIndex,
  Button_SetStylusHotImageIndex,
  Button_GetTabOrder,
  Button_SetTabOrder,
  Button_GetTabStop,
  Button_SetTabStop,
  Button_GetVisible,
  Button_SetVisible,
  Button_GetWordWrap,
  Button_SetWordWrap,
  Button_GetStyleElements,
  Button_SetStyleElements,
  Button_SetOnClick,
  Button_SetOnContextPopup,
  Button_SetOnDragDrop,
  Button_SetOnDragOver,
  Button_SetOnEndDock,
  Button_SetOnEndDrag,
  Button_SetOnEnter,
  Button_SetOnExit,
  Button_SetOnKeyDown,
  Button_SetOnKeyPress,
  Button_SetOnKeyUp,
  Button_SetOnMouseActivate,
  Button_SetOnMouseDown,
  Button_SetOnMouseEnter,
  Button_SetOnMouseLeave,
  Button_SetOnMouseMove,
  Button_SetOnMouseUp,
  Button_SetOnStartDock,
  Button_GetDockClientCount,
  Button_GetDockSite,
  Button_SetDockSite,
  Button_GetAlignDisabled,
  Button_GetMouseInClient,
  Button_GetVisibleDockClientCount,
  Button_GetBrush,
  Button_GetControlCount,
  Button_GetHandle,
  Button_GetParentWindow,
  Button_SetParentWindow,
  Button_GetUseDockManager,
  Button_SetUseDockManager,
  Button_GetBoundsRect,
  Button_SetBoundsRect,
  Button_GetClientHeight,
  Button_SetClientHeight,
  Button_GetClientOrigin,
  Button_GetClientRect,
  Button_GetClientWidth,
  Button_SetClientWidth,
  Button_GetControlState,
  Button_SetControlState,
  Button_GetControlStyle,
  Button_SetControlStyle,
  Button_GetExplicitLeft,
  Button_GetExplicitTop,
  Button_GetExplicitWidth,
  Button_GetExplicitHeight,
  Button_GetFloating,
  Button_GetParent,
  Button_SetParent,
  Button_SetOnGesture,
  Button_GetAlignWithMargins,
  Button_SetAlignWithMargins,
  Button_GetLeft,
  Button_SetLeft,
  Button_GetTop,
  Button_SetTop,
  Button_GetWidth,
  Button_SetWidth,
  Button_GetHeight,
  Button_SetHeight,
  Button_GetCursor,
  Button_SetCursor,
  Button_GetHint,
  Button_SetHint,
  Button_GetMargins,
  Button_SetMargins,
  Button_GetCustomHint,
  Button_SetCustomHint,
  Button_GetComponentCount,
  Button_GetComponentIndex,
  Button_SetComponentIndex,
  Button_GetOwner,
  Button_GetName,
  Button_SetName,
  Button_GetTag,
  Button_SetTag,
  Button_GetDockClients,
  Button_GetControls,
  Button_GetComponents,
  Button_StaticClassType;

