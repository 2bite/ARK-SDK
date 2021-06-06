// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WaterTankMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WaterTankMetal.EngramEntry_WaterTankMetal_C.ExecuteUbergraph_EngramEntry_WaterTankMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WaterTankMetal_C::ExecuteUbergraph_EngramEntry_WaterTankMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WaterTankMetal.EngramEntry_WaterTankMetal_C.ExecuteUbergraph_EngramEntry_WaterTankMetal");

	UEngramEntry_WaterTankMetal_C_ExecuteUbergraph_EngramEntry_WaterTankMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
