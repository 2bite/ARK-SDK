// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_Jugbug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_Jugbug.SE_DinoColorSet_Jugbug_C.ExecuteUbergraph_SE_DinoColorSet_Jugbug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_Jugbug_C::ExecuteUbergraph_SE_DinoColorSet_Jugbug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Jugbug.SE_DinoColorSet_Jugbug_C.ExecuteUbergraph_SE_DinoColorSet_Jugbug");

	USE_DinoColorSet_Jugbug_C_ExecuteUbergraph_SE_DinoColorSet_Jugbug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
