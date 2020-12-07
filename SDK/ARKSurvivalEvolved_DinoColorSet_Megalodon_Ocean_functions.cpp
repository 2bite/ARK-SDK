// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Megalodon_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Megalodon_Ocean.DinoColorSet_Megalodon_Ocean_C.ExecuteUbergraph_DinoColorSet_Megalodon_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Megalodon_Ocean_C::ExecuteUbergraph_DinoColorSet_Megalodon_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Megalodon_Ocean.DinoColorSet_Megalodon_Ocean_C.ExecuteUbergraph_DinoColorSet_Megalodon_Ocean");

	UDinoColorSet_Megalodon_Ocean_C_ExecuteUbergraph_DinoColorSet_Megalodon_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
