// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneHarvestComponent_Ex_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneHarvestComponent_Ex_Base.StoneHarvestComponent_Ex_Base_C.ExecuteUbergraph_StoneHarvestComponent_Ex_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStoneHarvestComponent_Ex_Base_C::ExecuteUbergraph_StoneHarvestComponent_Ex_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneHarvestComponent_Ex_Base.StoneHarvestComponent_Ex_Base_C.ExecuteUbergraph_StoneHarvestComponent_Ex_Base");

	UStoneHarvestComponent_Ex_Base_C_ExecuteUbergraph_StoneHarvestComponent_Ex_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
