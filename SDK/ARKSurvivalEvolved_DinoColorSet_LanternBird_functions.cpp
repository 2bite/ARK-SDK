// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LanternBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_LanternBird.DinoColorSet_LanternBird_C.ExecuteUbergraph_DinoColorSet_LanternBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_LanternBird_C::ExecuteUbergraph_DinoColorSet_LanternBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_LanternBird.DinoColorSet_LanternBird_C.ExecuteUbergraph_DinoColorSet_LanternBird");

	UDinoColorSet_LanternBird_C_ExecuteUbergraph_DinoColorSet_LanternBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
