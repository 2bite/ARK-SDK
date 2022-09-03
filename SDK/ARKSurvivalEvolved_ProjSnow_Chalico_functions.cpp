// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSnow_Chalico_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSnow_Chalico.ProjSnow_Chalico_C.UserConstructionScript
// ()

void AProjSnow_Chalico_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSnow_Chalico.ProjSnow_Chalico_C.UserConstructionScript");

	AProjSnow_Chalico_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSnow_Chalico.ProjSnow_Chalico_C.ExecuteUbergraph_ProjSnow_Chalico
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSnow_Chalico_C::ExecuteUbergraph_ProjSnow_Chalico(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSnow_Chalico.ProjSnow_Chalico_C.ExecuteUbergraph_ProjSnow_Chalico");

	AProjSnow_Chalico_C_ExecuteUbergraph_ProjSnow_Chalico_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
