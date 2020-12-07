// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Basilisk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Basilisk.DinoColorSet_Basilisk_C.ExecuteUbergraph_DinoColorSet_Basilisk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Basilisk_C::ExecuteUbergraph_DinoColorSet_Basilisk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Basilisk.DinoColorSet_Basilisk_C.ExecuteUbergraph_DinoColorSet_Basilisk");

	UDinoColorSet_Basilisk_C_ExecuteUbergraph_DinoColorSet_Basilisk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
