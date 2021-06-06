// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SE_DinoColorSet_Vulture_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoColorSet_Vulture.SE_DinoColorSet_Vulture_C.ExecuteUbergraph_SE_DinoColorSet_Vulture
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoColorSet_Vulture_C::ExecuteUbergraph_SE_DinoColorSet_Vulture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoColorSet_Vulture.SE_DinoColorSet_Vulture_C.ExecuteUbergraph_SE_DinoColorSet_Vulture");

	USE_DinoColorSet_Vulture_C_ExecuteUbergraph_SE_DinoColorSet_Vulture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
