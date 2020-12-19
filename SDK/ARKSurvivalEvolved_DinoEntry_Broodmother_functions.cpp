// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Broodmother_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Broodmother.DinoEntry_Broodmother_C.ExecuteUbergraph_DinoEntry_Broodmother
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Broodmother_C::ExecuteUbergraph_DinoEntry_Broodmother(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Broodmother.DinoEntry_Broodmother_C.ExecuteUbergraph_DinoEntry_Broodmother");

	UDinoEntry_Broodmother_C_ExecuteUbergraph_DinoEntry_Broodmother_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
