// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArthro_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArthro_Corrupt.ProjArthro_Corrupt_C.UserConstructionScript
// ()

void AProjArthro_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArthro_Corrupt.ProjArthro_Corrupt_C.UserConstructionScript");

	AProjArthro_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArthro_Corrupt.ProjArthro_Corrupt_C.ExecuteUbergraph_ProjArthro_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArthro_Corrupt_C::ExecuteUbergraph_ProjArthro_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArthro_Corrupt.ProjArthro_Corrupt_C.ExecuteUbergraph_ProjArthro_Corrupt");

	AProjArthro_Corrupt_C_ExecuteUbergraph_ProjArthro_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
