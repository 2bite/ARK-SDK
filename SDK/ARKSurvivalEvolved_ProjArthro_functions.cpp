// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArthro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArthro.ProjArthro_C.UserConstructionScript
// ()

void AProjArthro_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArthro.ProjArthro_C.UserConstructionScript");

	AProjArthro_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArthro.ProjArthro_C.ExecuteUbergraph_ProjArthro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArthro_C::ExecuteUbergraph_ProjArthro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArthro.ProjArthro_C.ExecuteUbergraph_ProjArthro");

	AProjArthro_C_ExecuteUbergraph_ProjArthro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
