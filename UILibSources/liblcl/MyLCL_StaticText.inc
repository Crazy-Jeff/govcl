
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function StaticText_Create(AOwner: TComponent): TStaticText; extdecl;
begin
  Result :=  TStaticText.Create(AOwner);
end;

procedure StaticText_Free(AObj: TStaticText); extdecl;
begin
  AObj.Free;
end;

function StaticText_CanFocus(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function StaticText_ContainsControl(AObj: TStaticText; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function StaticText_ControlAtPos(AObj: TStaticText; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure StaticText_DisableAlign(AObj: TStaticText); extdecl;
begin
  AObj.DisableAlign;
end;

procedure StaticText_EnableAlign(AObj: TStaticText); extdecl;
begin
  AObj.EnableAlign;
end;

function StaticText_FindChildControl(AObj: TStaticText; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure StaticText_FlipChildren(AObj: TStaticText; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function StaticText_Focused(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function StaticText_HandleAllocated(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure StaticText_InsertControl(AObj: TStaticText; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure StaticText_Invalidate(AObj: TStaticText); extdecl;
begin
  AObj.Invalidate;
end;

procedure StaticText_RemoveControl(AObj: TStaticText; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure StaticText_Realign(AObj: TStaticText); extdecl;
begin
  AObj.Realign;
end;

procedure StaticText_Repaint(AObj: TStaticText); extdecl;
begin
  AObj.Repaint;
end;

procedure StaticText_ScaleBy(AObj: TStaticText; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure StaticText_ScrollBy(AObj: TStaticText; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure StaticText_SetBounds(AObj: TStaticText; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure StaticText_SetFocus(AObj: TStaticText); extdecl;
begin
  AObj.SetFocus;
end;

procedure StaticText_Update(AObj: TStaticText); extdecl;
begin
  AObj.Update;
end;

procedure StaticText_BringToFront(AObj: TStaticText); extdecl;
begin
  AObj.BringToFront;
end;

procedure StaticText_ClientToScreen(AObj: TStaticText; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure StaticText_ClientToParent(AObj: TStaticText; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function StaticText_Dragging(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function StaticText_HasParent(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure StaticText_Hide(AObj: TStaticText); extdecl;
begin
  AObj.Hide;
end;

function StaticText_Perform(AObj: TStaticText; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure StaticText_Refresh(AObj: TStaticText); extdecl;
begin
  AObj.Refresh;
end;

procedure StaticText_ScreenToClient(AObj: TStaticText; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure StaticText_ParentToClient(AObj: TStaticText; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure StaticText_SendToBack(AObj: TStaticText); extdecl;
begin
  AObj.SendToBack;
end;

procedure StaticText_Show(AObj: TStaticText); extdecl;
begin
  AObj.Show;
end;

function StaticText_GetTextBuf(AObj: TStaticText; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function StaticText_GetTextLen(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure StaticText_SetTextBuf(AObj: TStaticText; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function StaticText_FindComponent(AObj: TStaticText; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function StaticText_GetNamePath(AObj: TStaticText): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure StaticText_Assign(AObj: TStaticText; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function StaticText_ClassType(AObj: TStaticText): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function StaticText_ClassName(AObj: TStaticText): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function StaticText_InstanceSize(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function StaticText_InheritsFrom(AObj: TStaticText; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function StaticText_Equals(AObj: TStaticText; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StaticText_GetHashCode(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StaticText_ToString(AObj: TStaticText): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function StaticText_GetAlign(AObj: TStaticText): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure StaticText_SetAlign(AObj: TStaticText; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function StaticText_GetAlignment(AObj: TStaticText): TAlignment; extdecl;
begin
  Result :=  AObj.Alignment;
end;

procedure StaticText_SetAlignment(AObj: TStaticText; AValue: TAlignment); extdecl;
begin
  AObj.Alignment := AValue;
end;

function StaticText_GetAnchors(AObj: TStaticText): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure StaticText_SetAnchors(AObj: TStaticText; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function StaticText_GetAutoSize(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure StaticText_SetAutoSize(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function StaticText_GetBiDiMode(AObj: TStaticText): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StaticText_SetBiDiMode(AObj: TStaticText; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function StaticText_GetBorderStyle(AObj: TStaticText): TStaticBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure StaticText_SetBorderStyle(AObj: TStaticText; AValue: TStaticBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function StaticText_GetCaption(AObj: TStaticText): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure StaticText_SetCaption(AObj: TStaticText; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function StaticText_GetColor(AObj: TStaticText): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure StaticText_SetColor(AObj: TStaticText; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function StaticText_GetConstraints(AObj: TStaticText): TSizeConstraints; extdecl;
begin
  Result :=  AObj.Constraints;
end;

procedure StaticText_SetConstraints(AObj: TStaticText; AValue: TSizeConstraints); extdecl;
begin
  AObj.Constraints := AValue;
end;

function StaticText_GetDoubleBuffered(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure StaticText_SetDoubleBuffered(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function StaticText_GetDragCursor(AObj: TStaticText): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure StaticText_SetDragCursor(AObj: TStaticText; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function StaticText_GetDragKind(AObj: TStaticText): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure StaticText_SetDragKind(AObj: TStaticText; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function StaticText_GetDragMode(AObj: TStaticText): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure StaticText_SetDragMode(AObj: TStaticText; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function StaticText_GetEnabled(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure StaticText_SetEnabled(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function StaticText_GetFont(AObj: TStaticText): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure StaticText_SetFont(AObj: TStaticText; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function StaticText_GetParentColor(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure StaticText_SetParentColor(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function StaticText_GetParentDoubleBuffered(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure StaticText_SetParentDoubleBuffered(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function StaticText_GetParentFont(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure StaticText_SetParentFont(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function StaticText_GetParentShowHint(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure StaticText_SetParentShowHint(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function StaticText_GetPopupMenu(AObj: TStaticText): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure StaticText_SetPopupMenu(AObj: TStaticText; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function StaticText_GetShowAccelChar(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.ShowAccelChar;
end;

procedure StaticText_SetShowAccelChar(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.ShowAccelChar := AValue;
end;

function StaticText_GetShowHint(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure StaticText_SetShowHint(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function StaticText_GetTabOrder(AObj: TStaticText): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure StaticText_SetTabOrder(AObj: TStaticText; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function StaticText_GetTabStop(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure StaticText_SetTabStop(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function StaticText_GetTransparent(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.Transparent;
end;

procedure StaticText_SetTransparent(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.Transparent := AValue;
end;

function StaticText_GetVisible(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure StaticText_SetVisible(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure StaticText_SetOnClick(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure StaticText_SetOnContextPopup(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure StaticText_SetOnDblClick(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure StaticText_SetOnDragDrop(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure StaticText_SetOnDragOver(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure StaticText_SetOnEndDrag(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure StaticText_SetOnMouseDown(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure StaticText_SetOnMouseEnter(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure StaticText_SetOnMouseLeave(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure StaticText_SetOnMouseMove(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure StaticText_SetOnMouseUp(AObj: TStaticText; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

function StaticText_GetDockClientCount(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function StaticText_GetDockSite(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure StaticText_SetDockSite(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function StaticText_GetMouseInClient(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function StaticText_GetVisibleDockClientCount(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function StaticText_GetBrush(AObj: TStaticText): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function StaticText_GetControlCount(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function StaticText_GetHandle(AObj: TStaticText): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function StaticText_GetParentWindow(AObj: TStaticText): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure StaticText_SetParentWindow(AObj: TStaticText; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function StaticText_GetUseDockManager(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure StaticText_SetUseDockManager(AObj: TStaticText; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function StaticText_GetAction(AObj: TStaticText): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure StaticText_SetAction(AObj: TStaticText; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure StaticText_GetBoundsRect(AObj: TStaticText; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure StaticText_SetBoundsRect(AObj: TStaticText; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function StaticText_GetClientHeight(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure StaticText_SetClientHeight(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure StaticText_GetClientOrigin(AObj: TStaticText; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure StaticText_GetClientRect(AObj: TStaticText; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function StaticText_GetClientWidth(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure StaticText_SetClientWidth(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function StaticText_GetControlState(AObj: TStaticText): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure StaticText_SetControlState(AObj: TStaticText; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function StaticText_GetControlStyle(AObj: TStaticText): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure StaticText_SetControlStyle(AObj: TStaticText; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function StaticText_GetFloating(AObj: TStaticText): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function StaticText_GetParent(AObj: TStaticText): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure StaticText_SetParent(AObj: TStaticText; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function StaticText_GetLeft(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure StaticText_SetLeft(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function StaticText_GetTop(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure StaticText_SetTop(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function StaticText_GetWidth(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure StaticText_SetWidth(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function StaticText_GetHeight(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure StaticText_SetHeight(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function StaticText_GetCursor(AObj: TStaticText): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure StaticText_SetCursor(AObj: TStaticText; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function StaticText_GetHint(AObj: TStaticText): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure StaticText_SetHint(AObj: TStaticText; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function StaticText_GetComponentCount(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function StaticText_GetComponentIndex(AObj: TStaticText): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure StaticText_SetComponentIndex(AObj: TStaticText; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function StaticText_GetOwner(AObj: TStaticText): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function StaticText_GetName(AObj: TStaticText): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure StaticText_SetName(AObj: TStaticText; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function StaticText_GetTag(AObj: TStaticText): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure StaticText_SetTag(AObj: TStaticText; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function StaticText_GetDockClients(AObj: TStaticText; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function StaticText_GetControls(AObj: TStaticText; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function StaticText_GetComponents(AObj: TStaticText; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function StaticText_GetMargins(AObj: TStaticText): TControlBorderSpacing; extdecl;
begin
  Result := AObj.BorderSpacing;
end;

procedure StaticText_SetMargins(AObj: TStaticText; AValue: TControlBorderSpacing); extdecl;
begin
  AObj.BorderSpacing := AValue;
end;

function StaticText_StaticClassType: TClass; extdecl;
begin
  Result := TStaticText;
end;

exports
  StaticText_Create,
  StaticText_Free,
  StaticText_CanFocus,
  StaticText_ContainsControl,
  StaticText_ControlAtPos,
  StaticText_DisableAlign,
  StaticText_EnableAlign,
  StaticText_FindChildControl,
  StaticText_FlipChildren,
  StaticText_Focused,
  StaticText_HandleAllocated,
  StaticText_InsertControl,
  StaticText_Invalidate,
  StaticText_RemoveControl,
  StaticText_Realign,
  StaticText_Repaint,
  StaticText_ScaleBy,
  StaticText_ScrollBy,
  StaticText_SetBounds,
  StaticText_SetFocus,
  StaticText_Update,
  StaticText_BringToFront,
  StaticText_ClientToScreen,
  StaticText_ClientToParent,
  StaticText_Dragging,
  StaticText_HasParent,
  StaticText_Hide,
  StaticText_Perform,
  StaticText_Refresh,
  StaticText_ScreenToClient,
  StaticText_ParentToClient,
  StaticText_SendToBack,
  StaticText_Show,
  StaticText_GetTextBuf,
  StaticText_GetTextLen,
  StaticText_SetTextBuf,
  StaticText_FindComponent,
  StaticText_GetNamePath,
  StaticText_Assign,
  StaticText_ClassType,
  StaticText_ClassName,
  StaticText_InstanceSize,
  StaticText_InheritsFrom,
  StaticText_Equals,
  StaticText_GetHashCode,
  StaticText_ToString,
  StaticText_GetAlign,
  StaticText_SetAlign,
  StaticText_GetAlignment,
  StaticText_SetAlignment,
  StaticText_GetAnchors,
  StaticText_SetAnchors,
  StaticText_GetAutoSize,
  StaticText_SetAutoSize,
  StaticText_GetBiDiMode,
  StaticText_SetBiDiMode,
  StaticText_GetBorderStyle,
  StaticText_SetBorderStyle,
  StaticText_GetCaption,
  StaticText_SetCaption,
  StaticText_GetColor,
  StaticText_SetColor,
  StaticText_GetConstraints,
  StaticText_SetConstraints,
  StaticText_GetDoubleBuffered,
  StaticText_SetDoubleBuffered,
  StaticText_GetDragCursor,
  StaticText_SetDragCursor,
  StaticText_GetDragKind,
  StaticText_SetDragKind,
  StaticText_GetDragMode,
  StaticText_SetDragMode,
  StaticText_GetEnabled,
  StaticText_SetEnabled,
  StaticText_GetFont,
  StaticText_SetFont,
  StaticText_GetParentColor,
  StaticText_SetParentColor,
  StaticText_GetParentDoubleBuffered,
  StaticText_SetParentDoubleBuffered,
  StaticText_GetParentFont,
  StaticText_SetParentFont,
  StaticText_GetParentShowHint,
  StaticText_SetParentShowHint,
  StaticText_GetPopupMenu,
  StaticText_SetPopupMenu,
  StaticText_GetShowAccelChar,
  StaticText_SetShowAccelChar,
  StaticText_GetShowHint,
  StaticText_SetShowHint,
  StaticText_GetTabOrder,
  StaticText_SetTabOrder,
  StaticText_GetTabStop,
  StaticText_SetTabStop,
  StaticText_GetTransparent,
  StaticText_SetTransparent,
  StaticText_GetVisible,
  StaticText_SetVisible,
  StaticText_SetOnClick,
  StaticText_SetOnContextPopup,
  StaticText_SetOnDblClick,
  StaticText_SetOnDragDrop,
  StaticText_SetOnDragOver,
  StaticText_SetOnEndDrag,
  StaticText_SetOnMouseDown,
  StaticText_SetOnMouseEnter,
  StaticText_SetOnMouseLeave,
  StaticText_SetOnMouseMove,
  StaticText_SetOnMouseUp,
  StaticText_GetDockClientCount,
  StaticText_GetDockSite,
  StaticText_SetDockSite,
  StaticText_GetMouseInClient,
  StaticText_GetVisibleDockClientCount,
  StaticText_GetBrush,
  StaticText_GetControlCount,
  StaticText_GetHandle,
  StaticText_GetParentWindow,
  StaticText_SetParentWindow,
  StaticText_GetUseDockManager,
  StaticText_SetUseDockManager,
  StaticText_GetAction,
  StaticText_SetAction,
  StaticText_GetBoundsRect,
  StaticText_SetBoundsRect,
  StaticText_GetClientHeight,
  StaticText_SetClientHeight,
  StaticText_GetClientOrigin,
  StaticText_GetClientRect,
  StaticText_GetClientWidth,
  StaticText_SetClientWidth,
  StaticText_GetControlState,
  StaticText_SetControlState,
  StaticText_GetControlStyle,
  StaticText_SetControlStyle,
  StaticText_GetFloating,
  StaticText_GetParent,
  StaticText_SetParent,
  StaticText_GetLeft,
  StaticText_SetLeft,
  StaticText_GetTop,
  StaticText_SetTop,
  StaticText_GetWidth,
  StaticText_SetWidth,
  StaticText_GetHeight,
  StaticText_SetHeight,
  StaticText_GetCursor,
  StaticText_SetCursor,
  StaticText_GetHint,
  StaticText_SetHint,
  StaticText_GetComponentCount,
  StaticText_GetComponentIndex,
  StaticText_SetComponentIndex,
  StaticText_GetOwner,
  StaticText_GetName,
  StaticText_SetName,
  StaticText_GetTag,
  StaticText_SetTag,
  StaticText_GetDockClients,
  StaticText_GetControls,
  StaticText_GetComponents,
  StaticText_StaticClassType,
  StaticText_GetMargins,
  StaticText_SetMargins;

