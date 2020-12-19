// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Volcano_Ankylosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Volcano_Ankylosaurus.DinoColorSet_Volcano_Ankylosaurus_C.ExecuteUbergraph_DinoColorSet_Volcano_Ankylosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Volcano_Ankylosaurus_C::ExecuteUbergraph_DinoColorSet_Volcano_Ankylosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Volcano_Ankylosaurus.DinoColorSet_Volcano_Ankylosaurus_C.ExecuteUbergraph_DinoColorSet_Volcano_Ankylosaurus");

	UDinoColorSet_Volcano_Ankylosaurus_C_ExecuteUbergraph_DinoColorSet_Volcano_Ankylosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
