// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Raptor_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Raptor_Corrupt.DinoColorSet_Raptor_Corrupt_C.ExecuteUbergraph_DinoColorSet_Raptor_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Raptor_Corrupt_C::ExecuteUbergraph_DinoColorSet_Raptor_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Raptor_Corrupt.DinoColorSet_Raptor_Corrupt_C.ExecuteUbergraph_DinoColorSet_Raptor_Corrupt");

	UDinoColorSet_Raptor_Corrupt_C_ExecuteUbergraph_DinoColorSet_Raptor_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
