// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Beaver_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Beaver.DinoEntry_Beaver_C.ExecuteUbergraph_DinoEntry_Beaver
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Beaver_C::ExecuteUbergraph_DinoEntry_Beaver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Beaver.DinoEntry_Beaver_C.ExecuteUbergraph_DinoEntry_Beaver");

	UDinoEntry_Beaver_C_ExecuteUbergraph_DinoEntry_Beaver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
