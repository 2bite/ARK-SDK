// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Arkaeology_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Arkaeology.DinoColorSet_Arkaeology_C.ExecuteUbergraph_DinoColorSet_Arkaeology
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Arkaeology_C::ExecuteUbergraph_DinoColorSet_Arkaeology(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Arkaeology.DinoColorSet_Arkaeology_C.ExecuteUbergraph_DinoColorSet_Arkaeology");

	UDinoColorSet_Arkaeology_C_ExecuteUbergraph_DinoColorSet_Arkaeology_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
