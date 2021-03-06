procedure ControlScrollBar_Assign(AObj: TControlScrollBar; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ControlScrollBar_IsScrollBarVisible(AObj: TControlScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.IsScrollBarVisible;
end;

function ControlScrollBar_GetNamePath(AObj: TControlScrollBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function ControlScrollBar_ClassType(AObj: TControlScrollBar): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ControlScrollBar_ClassName(AObj: TControlScrollBar): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ControlScrollBar_InstanceSize(AObj: TControlScrollBar): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ControlScrollBar_InheritsFrom(AObj: TControlScrollBar; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ControlScrollBar_Equals(AObj: TControlScrollBar; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ControlScrollBar_GetHashCode(AObj: TControlScrollBar): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ControlScrollBar_ToString(AObj: TControlScrollBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function ControlScrollBar_GetScrollPos(AObj: TControlScrollBar): Integer; extdecl;
begin
  Result :=  AObj.ScrollPos;
end;

function ControlScrollBar_GetIncrement(AObj: TControlScrollBar): TScrollBarInc; extdecl;
begin
  Result :=  AObj.Increment;
end;

procedure ControlScrollBar_SetIncrement(AObj: TControlScrollBar; AValue: TScrollBarInc); extdecl;
begin
  AObj.Increment := AValue;
end;

function ControlScrollBar_GetPosition(AObj: TControlScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Position;
end;

procedure ControlScrollBar_SetPosition(AObj: TControlScrollBar; AValue: Integer); extdecl;
begin
  AObj.Position := AValue;
end;

function ControlScrollBar_GetRange(AObj: TControlScrollBar): Integer; extdecl;
begin
  Result :=  AObj.Range;
end;

procedure ControlScrollBar_SetRange(AObj: TControlScrollBar; AValue: Integer); extdecl;
begin
  AObj.Range := AValue;
end;

function ControlScrollBar_GetSmooth(AObj: TControlScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Smooth;
end;

procedure ControlScrollBar_SetSmooth(AObj: TControlScrollBar; AValue: LongBool); extdecl;
begin
  AObj.Smooth := AValue;
end;

function ControlScrollBar_GetTracking(AObj: TControlScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Tracking;
end;

procedure ControlScrollBar_SetTracking(AObj: TControlScrollBar; AValue: LongBool); extdecl;
begin
  AObj.Tracking := AValue;
end;

function ControlScrollBar_GetVisible(AObj: TControlScrollBar): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ControlScrollBar_SetVisible(AObj: TControlScrollBar; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function ControlScrollBar_StaticClassType: TClass; extdecl;
begin
  Result := TControlScrollBar;
end;

exports
  ControlScrollBar_Assign,
  ControlScrollBar_IsScrollBarVisible,
  ControlScrollBar_GetNamePath,
  ControlScrollBar_ClassType,
  ControlScrollBar_ClassName,
  ControlScrollBar_InstanceSize,
  ControlScrollBar_InheritsFrom,
  ControlScrollBar_Equals,
  ControlScrollBar_GetHashCode,
  ControlScrollBar_ToString,
  ControlScrollBar_GetScrollPos,
  ControlScrollBar_GetIncrement,
  ControlScrollBar_SetIncrement,
  ControlScrollBar_GetPosition,
  ControlScrollBar_SetPosition,
  ControlScrollBar_GetRange,
  ControlScrollBar_SetRange,
  ControlScrollBar_GetSmooth,
  ControlScrollBar_SetSmooth,
  ControlScrollBar_GetTracking,
  ControlScrollBar_SetTracking,
  ControlScrollBar_GetVisible,
  ControlScrollBar_SetVisible,
  ControlScrollBar_StaticClassType;

