// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Volcano_Allosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Volcano_Allosaurus.DinoColorSet_Volcano_Allosaurus_C.ExecuteUbergraph_DinoColorSet_Volcano_Allosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Volcano_Allosaurus_C::ExecuteUbergraph_DinoColorSet_Volcano_Allosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Volcano_Allosaurus.DinoColorSet_Volcano_Allosaurus_C.ExecuteUbergraph_DinoColorSet_Volcano_Allosaurus");

	UDinoColorSet_Volcano_Allosaurus_C_ExecuteUbergraph_DinoColorSet_Volcano_Allosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
