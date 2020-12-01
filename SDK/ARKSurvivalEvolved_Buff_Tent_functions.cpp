// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Tent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Tent.Buff_Tent_C.SetBuffCauser
// ()
// Parameters:
// class AActor**                 CausedBy                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Tent_C::SetBuffCauser(class AActor** CausedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Tent.Buff_Tent_C.SetBuffCauser");

	ABuff_Tent_C_SetBuffCauser_Params params;
	params.CausedBy = CausedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Tent.Buff_Tent_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Tent_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Tent.Buff_Tent_C.BuffTickServer");

	ABuff_Tent_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Tent.Buff_Tent_C.UserConstructionScript
// ()

void ABuff_Tent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Tent.Buff_Tent_C.UserConstructionScript");

	ABuff_Tent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Tent.Buff_Tent_C.ExecuteUbergraph_Buff_Tent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Tent_C::ExecuteUbergraph_Buff_Tent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Tent.Buff_Tent_C.ExecuteUbergraph_Buff_Tent");

	ABuff_Tent_C_ExecuteUbergraph_Buff_Tent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
