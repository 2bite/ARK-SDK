// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deinonychus_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.DinoUberpounce
// (Exec, Native, NetResponse, Static, Private, NetServer, HasDefaults, NetClient)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::STATIC_DinoUberpounce(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.DinoUberpounce");

	ADeinonychus_AIController_BP_C_DinoUberpounce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.LocationUberpounce
// (NetRequest, Native, NetMulticast, Private, NetServer, HasDefaults, NetClient)

void ADeinonychus_AIController_BP_C::LocationUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.LocationUberpounce");

	ADeinonychus_AIController_BP_C_LocationUberpounce_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.AllowSurfaceNormalForUberpounce
// ()
// Parameters:
// struct FVector                 surfaceNormal                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.AllowSurfaceNormalForUberpounce");

	ADeinonychus_AIController_BP_C_AllowSurfaceNormalForUberpounce_Params params;
	params.surfaceNormal = surfaceNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Enable
// ()

void ADeinonychus_AIController_BP_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Enable");

	ADeinonychus_AIController_BP_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Start Uberpounce
// ()
// Parameters:
// struct FUberpounceData         Data                           (Parm)

void ADeinonychus_AIController_BP_C::Start_Uberpounce(const struct FUberpounceData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Start Uberpounce");

	ADeinonychus_AIController_BP_C_Start_Uberpounce_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Deinonychus AttackedWhileLatched
// ()

void ADeinonychus_AIController_BP_C::Deinonychus_AttackedWhileLatched()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.Deinonychus AttackedWhileLatched");

	ADeinonychus_AIController_BP_C_Deinonychus_AttackedWhileLatched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.OnUberpounceStateChanged
// (Net, NetRequest, Exec, Event, NetMulticast, Private, Protected, Delegate, HasDefaults, NetClient)
// Parameters:
// TEnumAsByte<EUberpounceState>  NewState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUberpounceState>  PrevState                      (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::OnUberpounceStateChanged(TEnumAsByte<EUberpounceState> NewState, TEnumAsByte<EUberpounceState> PrevState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.OnUberpounceStateChanged");

	ADeinonychus_AIController_BP_C_OnUberpounceStateChanged_Params params;
	params.NewState = NewState;
	params.PrevState = PrevState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.UpdateUberpounce
// ()

void ADeinonychus_AIController_BP_C::UpdateUberpounce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.UpdateUberpounce");

	ADeinonychus_AIController_BP_C_UpdateUberpounce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ReceiveBeginPlay
// ()

void ADeinonychus_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ReceiveBeginPlay");

	ADeinonychus_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ReceiveTick");

	ADeinonychus_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.GetPrimalTarget
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::GetPrimalTarget(class APrimalCharacter** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.GetPrimalTarget");

	ADeinonychus_AIController_BP_C_GetPrimalTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.GetDino
// ()
// Parameters:
// class ADeinonychus_Character_BP_C* Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::GetDino(class ADeinonychus_Character_BP_C** Ret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.GetDino");

	ADeinonychus_AIController_BP_C_GetDino_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.UserConstructionScript
// ()

void ADeinonychus_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.UserConstructionScript");

	ADeinonychus_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ExecuteUbergraph_Deinonychus_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeinonychus_AIController_BP_C::ExecuteUbergraph_Deinonychus_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Deinonychus_AIController_BP.Deinonychus_AIController_BP_C.ExecuteUbergraph_Deinonychus_AIController_BP");

	ADeinonychus_AIController_BP_C_ExecuteUbergraph_Deinonychus_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
