// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Parasaur_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Parasaur_Bog.DinoColorSet_Parasaur_Bog_C.ExecuteUbergraph_DinoColorSet_Parasaur_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Parasaur_Bog_C::ExecuteUbergraph_DinoColorSet_Parasaur_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Parasaur_Bog.DinoColorSet_Parasaur_Bog_C.ExecuteUbergraph_DinoColorSet_Parasaur_Bog");

	UDinoColorSet_Parasaur_Bog_C_ExecuteUbergraph_DinoColorSet_Parasaur_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
