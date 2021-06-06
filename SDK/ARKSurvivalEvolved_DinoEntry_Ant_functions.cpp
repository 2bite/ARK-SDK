// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Ant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Ant.DinoEntry_Ant_C.ExecuteUbergraph_DinoEntry_Ant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Ant_C::ExecuteUbergraph_DinoEntry_Ant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Ant.DinoEntry_Ant_C.ExecuteUbergraph_DinoEntry_Ant");

	UDinoEntry_Ant_C_ExecuteUbergraph_DinoEntry_Ant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
