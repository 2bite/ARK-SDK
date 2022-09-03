// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Andrewsarchus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Andrewsarchus.DinoColorSet_Andrewsarchus_C.ExecuteUbergraph_DinoColorSet_Andrewsarchus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Andrewsarchus_C::ExecuteUbergraph_DinoColorSet_Andrewsarchus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Andrewsarchus.DinoColorSet_Andrewsarchus_C.ExecuteUbergraph_DinoColorSet_Andrewsarchus");

	UDinoColorSet_Andrewsarchus_C_ExecuteUbergraph_DinoColorSet_Andrewsarchus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
