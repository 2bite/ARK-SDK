// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Shapeshifter_Large_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.DinoUberpounce
// (Exec, Event, NetMulticast, Public, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::DinoUberpounce(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.DinoUberpounce");

	AShapeshifter_Large_AIController_BP_C_DinoUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.LocationUberpounce
// (NetReliable, NetRequest, Event, NetResponse, NetMulticast, Public, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)

void AShapeshifter_Large_AIController_BP_C::LocationUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.LocationUberpounce");

	AShapeshifter_Large_AIController_BP_C_LocationUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.AllowSurfaceNormalForUberpounce
// ()
// Parameters:
// struct FVector                 SurfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::AllowSurfaceNormalForUberpounce(const struct FVector& SurfaceNormal, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.AllowSurfaceNormalForUberpounce");

	AShapeshifter_Large_AIController_BP_C_AllowSurfaceNormalForUberpounce_Params params;
	params.SurfaceNormal = SurfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Enable
// ()

void AShapeshifter_Large_AIController_BP_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Enable");

	AShapeshifter_Large_AIController_BP_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Start Uberpounce
// ()
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void AShapeshifter_Large_AIController_BP_C::Start_Uberpounce(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Start Uberpounce");

	AShapeshifter_Large_AIController_BP_C_Start_Uberpounce_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Deinonychus AttackedWhileLatched
// ()

void AShapeshifter_Large_AIController_BP_C::Deinonychus_AttackedWhileLatched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.Deinonychus AttackedWhileLatched");

	AShapeshifter_Large_AIController_BP_C_Deinonychus_AttackedWhileLatched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.OnUberpounceStateChanged
// (NetReliable, NetRequest, Exec, Event, Static, MulticastDelegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// TEnumAsByte<EUberpounceState>  NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUberpounceState>  PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::STATIC_OnUberpounceStateChanged(TEnumAsByte<EUberpounceState> NewState, TEnumAsByte<EUberpounceState> PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.OnUberpounceStateChanged");

	AShapeshifter_Large_AIController_BP_C_OnUberpounceStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UpdateUberpounce
// ()

void AShapeshifter_Large_AIController_BP_C::UpdateUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UpdateUberpounce");

	AShapeshifter_Large_AIController_BP_C_UpdateUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveBeginPlay
// ()

void AShapeshifter_Large_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveBeginPlay");

	AShapeshifter_Large_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ReceiveTick");

	AShapeshifter_Large_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetPrimalTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::GetPrimalTarget(class APrimalCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetPrimalTarget");

	AShapeshifter_Large_AIController_BP_C_GetPrimalTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetDino
// ()
// Parameters:
// class ADeinonychus_Character_BP_C* Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::GetDino(class ADeinonychus_Character_BP_C** Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.GetDino");

	AShapeshifter_Large_AIController_BP_C_GetDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UserConstructionScript
// ()

void AShapeshifter_Large_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.UserConstructionScript");

	AShapeshifter_Large_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_C::ExecuteUbergraph_Shapeshifter_Large_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP.Shapeshifter_Large_AIController_BP_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP");

	AShapeshifter_Large_AIController_BP_C_ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
