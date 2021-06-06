// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Owl_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Owl_Eden.DinoColorSet_Owl_Eden_C.ExecuteUbergraph_DinoColorSet_Owl_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Owl_Eden_C::ExecuteUbergraph_DinoColorSet_Owl_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Owl_Eden.DinoColorSet_Owl_Eden_C.ExecuteUbergraph_DinoColorSet_Owl_Eden");

	UDinoColorSet_Owl_Eden_C_ExecuteUbergraph_DinoColorSet_Owl_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
