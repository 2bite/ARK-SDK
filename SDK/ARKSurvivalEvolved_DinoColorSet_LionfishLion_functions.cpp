// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LionfishLion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_LionfishLion.DinoColorSet_LionfishLion_C.ExecuteUbergraph_DinoColorSet_LionfishLion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_LionfishLion_C::ExecuteUbergraph_DinoColorSet_LionfishLion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_LionfishLion.DinoColorSet_LionfishLion_C.ExecuteUbergraph_DinoColorSet_LionfishLion");

	UDinoColorSet_LionfishLion_C_ExecuteUbergraph_DinoColorSet_LionfishLion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
