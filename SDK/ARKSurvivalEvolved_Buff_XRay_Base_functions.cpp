// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XRay_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_XRay_Base.Buff_XRay_Base_C.ReceiveDestroyed
// ()

void ABuff_XRay_Base_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XRay_Base.Buff_XRay_Base_C.ReceiveDestroyed");

	ABuff_XRay_Base_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XRay_Base.Buff_XRay_Base_C.ResetCharBounds
// ()

void ABuff_XRay_Base_C::ResetCharBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XRay_Base.Buff_XRay_Base_C.ResetCharBounds");

	ABuff_XRay_Base_C_ResetCharBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XRay_Base.Buff_XRay_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XRay_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XRay_Base.Buff_XRay_Base_C.BuffTickClient");

	ABuff_XRay_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XRay_Base.Buff_XRay_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XRay_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XRay_Base.Buff_XRay_Base_C.BPDeactivated");

	ABuff_XRay_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XRay_Base.Buff_XRay_Base_C.UserConstructionScript
// ()

void ABuff_XRay_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XRay_Base.Buff_XRay_Base_C.UserConstructionScript");

	ABuff_XRay_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_XRay_Base.Buff_XRay_Base_C.ExecuteUbergraph_Buff_XRay_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_XRay_Base_C::ExecuteUbergraph_Buff_XRay_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_XRay_Base.Buff_XRay_Base_C.ExecuteUbergraph_Buff_XRay_Base");

	ABuff_XRay_Base_C_ExecuteUbergraph_Buff_XRay_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
