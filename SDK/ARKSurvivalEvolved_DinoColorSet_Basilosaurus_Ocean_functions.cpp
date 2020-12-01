// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Basilosaurus_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Basilosaurus_Ocean.DinoColorSet_Basilosaurus_Ocean_C.ExecuteUbergraph_DinoColorSet_Basilosaurus_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Basilosaurus_Ocean_C::ExecuteUbergraph_DinoColorSet_Basilosaurus_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Basilosaurus_Ocean.DinoColorSet_Basilosaurus_Ocean_C.ExecuteUbergraph_DinoColorSet_Basilosaurus_Ocean");

	UDinoColorSet_Basilosaurus_Ocean_C_ExecuteUbergraph_DinoColorSet_Basilosaurus_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
