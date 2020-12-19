// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpear_Santiago_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpear_Santiago.ProjSpear_Santiago_C.UserConstructionScript
// ()

void AProjSpear_Santiago_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Santiago.ProjSpear_Santiago_C.UserConstructionScript");

	AProjSpear_Santiago_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpear_Santiago.ProjSpear_Santiago_C.ExecuteUbergraph_ProjSpear_Santiago
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpear_Santiago_C::ExecuteUbergraph_ProjSpear_Santiago(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Santiago.ProjSpear_Santiago_C.ExecuteUbergraph_ProjSpear_Santiago");

	AProjSpear_Santiago_C_ExecuteUbergraph_ProjSpear_Santiago_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
