
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function PrinterSetupDialog_Create(AOwner: TComponent): TPrinterSetupDialog; extdecl;
begin
  Result :=  TPrinterSetupDialog.Create(AOwner);
end;

procedure PrinterSetupDialog_Free(AObj: TPrinterSetupDialog); extdecl;
begin
  AObj.Free;
end;

function PrinterSetupDialog_Execute(AObj: TPrinterSetupDialog): LongBool; extdecl;
begin
  Result :=  AObj.Execute;
end;

function PrinterSetupDialog_FindComponent(AObj: TPrinterSetupDialog; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function PrinterSetupDialog_GetNamePath(AObj: TPrinterSetupDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function PrinterSetupDialog_HasParent(AObj: TPrinterSetupDialog): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure PrinterSetupDialog_Assign(AObj: TPrinterSetupDialog; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function PrinterSetupDialog_ClassType(AObj: TPrinterSetupDialog): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function PrinterSetupDialog_ClassName(AObj: TPrinterSetupDialog): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function PrinterSetupDialog_InstanceSize(AObj: TPrinterSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function PrinterSetupDialog_InheritsFrom(AObj: TPrinterSetupDialog; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function PrinterSetupDialog_Equals(AObj: TPrinterSetupDialog; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function PrinterSetupDialog_GetHashCode(AObj: TPrinterSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function PrinterSetupDialog_ToString(AObj: TPrinterSetupDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function PrinterSetupDialog_GetHandle(AObj: TPrinterSetupDialog): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

procedure PrinterSetupDialog_SetOnClose(AObj: TPrinterSetupDialog; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClose}
  {$DEFINE EventMethodName := OnClose}
  EventMethodCode
end;

procedure PrinterSetupDialog_SetOnShow(AObj: TPrinterSetupDialog; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnShow}
  {$DEFINE EventMethodName := OnShow}
  EventMethodCode
end;

function PrinterSetupDialog_GetComponentCount(AObj: TPrinterSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function PrinterSetupDialog_GetComponentIndex(AObj: TPrinterSetupDialog): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure PrinterSetupDialog_SetComponentIndex(AObj: TPrinterSetupDialog; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function PrinterSetupDialog_GetOwner(AObj: TPrinterSetupDialog): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function PrinterSetupDialog_GetName(AObj: TPrinterSetupDialog): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure PrinterSetupDialog_SetName(AObj: TPrinterSetupDialog; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function PrinterSetupDialog_GetTag(AObj: TPrinterSetupDialog): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure PrinterSetupDialog_SetTag(AObj: TPrinterSetupDialog; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function PrinterSetupDialog_GetComponents(AObj: TPrinterSetupDialog; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function PrinterSetupDialog_StaticClassType: TClass; extdecl;
begin
  Result := TPrinterSetupDialog;
end;

exports
  PrinterSetupDialog_Create,
  PrinterSetupDialog_Free,
  PrinterSetupDialog_Execute,
  PrinterSetupDialog_FindComponent,
  PrinterSetupDialog_GetNamePath,
  PrinterSetupDialog_HasParent,
  PrinterSetupDialog_Assign,
  PrinterSetupDialog_ClassType,
  PrinterSetupDialog_ClassName,
  PrinterSetupDialog_InstanceSize,
  PrinterSetupDialog_InheritsFrom,
  PrinterSetupDialog_Equals,
  PrinterSetupDialog_GetHashCode,
  PrinterSetupDialog_ToString,
  PrinterSetupDialog_GetHandle,
  PrinterSetupDialog_SetOnClose,
  PrinterSetupDialog_SetOnShow,
  PrinterSetupDialog_GetComponentCount,
  PrinterSetupDialog_GetComponentIndex,
  PrinterSetupDialog_SetComponentIndex,
  PrinterSetupDialog_GetOwner,
  PrinterSetupDialog_GetName,
  PrinterSetupDialog_SetName,
  PrinterSetupDialog_GetTag,
  PrinterSetupDialog_SetTag,
  PrinterSetupDialog_GetComponents,
  PrinterSetupDialog_StaticClassType;

