// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FKaijuProtecting_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FKaijuProtecting.Buff_FKaijuProtecting_C.UserConstructionScript
// ()

void ABuff_FKaijuProtecting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuProtecting.Buff_FKaijuProtecting_C.UserConstructionScript");

	ABuff_FKaijuProtecting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FKaijuProtecting.Buff_FKaijuProtecting_C.ExecuteUbergraph_Buff_FKaijuProtecting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FKaijuProtecting_C::ExecuteUbergraph_Buff_FKaijuProtecting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FKaijuProtecting.Buff_FKaijuProtecting_C.ExecuteUbergraph_Buff_FKaijuProtecting");

	ABuff_FKaijuProtecting_C_ExecuteUbergraph_Buff_FKaijuProtecting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
