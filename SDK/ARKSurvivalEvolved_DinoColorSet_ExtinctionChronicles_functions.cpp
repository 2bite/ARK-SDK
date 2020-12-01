// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_ExtinctionChronicles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_ExtinctionChronicles.DinoColorSet_ExtinctionChronicles_C.ExecuteUbergraph_DinoColorSet_ExtinctionChronicles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_ExtinctionChronicles_C::ExecuteUbergraph_DinoColorSet_ExtinctionChronicles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_ExtinctionChronicles.DinoColorSet_ExtinctionChronicles_C.ExecuteUbergraph_DinoColorSet_ExtinctionChronicles");

	UDinoColorSet_ExtinctionChronicles_C_ExecuteUbergraph_DinoColorSet_ExtinctionChronicles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
