// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Parasaur_Eden_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Parasaur_Eden.DinoColorSet_Parasaur_Eden_C.ExecuteUbergraph_DinoColorSet_Parasaur_Eden
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Parasaur_Eden_C::ExecuteUbergraph_DinoColorSet_Parasaur_Eden(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Parasaur_Eden.DinoColorSet_Parasaur_Eden_C.ExecuteUbergraph_DinoColorSet_Parasaur_Eden");

	UDinoColorSet_Parasaur_Eden_C_ExecuteUbergraph_DinoColorSet_Parasaur_Eden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
