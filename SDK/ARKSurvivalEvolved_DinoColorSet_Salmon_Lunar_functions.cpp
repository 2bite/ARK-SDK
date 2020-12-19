// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Salmon_Lunar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Salmon_Lunar.DinoColorSet_Salmon_Lunar_C.ExecuteUbergraph_DinoColorSet_Salmon_Lunar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Salmon_Lunar_C::ExecuteUbergraph_DinoColorSet_Salmon_Lunar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Salmon_Lunar.DinoColorSet_Salmon_Lunar_C.ExecuteUbergraph_DinoColorSet_Salmon_Lunar");

	UDinoColorSet_Salmon_Lunar_C_ExecuteUbergraph_DinoColorSet_Salmon_Lunar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
