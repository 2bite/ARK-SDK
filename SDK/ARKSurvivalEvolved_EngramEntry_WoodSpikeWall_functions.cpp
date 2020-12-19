// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodSpikeWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodSpikeWall.EngramEntry_WoodSpikeWall_C.ExecuteUbergraph_EngramEntry_WoodSpikeWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodSpikeWall_C::ExecuteUbergraph_EngramEntry_WoodSpikeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodSpikeWall.EngramEntry_WoodSpikeWall_C.ExecuteUbergraph_EngramEntry_WoodSpikeWall");

	UEngramEntry_WoodSpikeWall_C_ExecuteUbergraph_EngramEntry_WoodSpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
