// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Volcano_Golem_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Volcano_Golem.DinoColorSet_Volcano_Golem_C.ExecuteUbergraph_DinoColorSet_Volcano_Golem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Volcano_Golem_C::ExecuteUbergraph_DinoColorSet_Volcano_Golem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Volcano_Golem.DinoColorSet_Volcano_Golem_C.ExecuteUbergraph_DinoColorSet_Volcano_Golem");

	UDinoColorSet_Volcano_Golem_C_ExecuteUbergraph_DinoColorSet_Volcano_Golem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
