// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_CorruptedSummoner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_CorruptedSummoner.DinoColorSet_CorruptedSummoner_C.ExecuteUbergraph_DinoColorSet_CorruptedSummoner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_CorruptedSummoner_C::ExecuteUbergraph_DinoColorSet_CorruptedSummoner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_CorruptedSummoner.DinoColorSet_CorruptedSummoner_C.ExecuteUbergraph_DinoColorSet_CorruptedSummoner");

	UDinoColorSet_CorruptedSummoner_C_ExecuteUbergraph_DinoColorSet_CorruptedSummoner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
