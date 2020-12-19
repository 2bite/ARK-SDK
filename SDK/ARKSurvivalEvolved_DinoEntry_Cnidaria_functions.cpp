// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Cnidaria_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Cnidaria.DinoEntry_Cnidaria_C.ExecuteUbergraph_DinoEntry_Cnidaria
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Cnidaria_C::ExecuteUbergraph_DinoEntry_Cnidaria(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Cnidaria.DinoEntry_Cnidaria_C.ExecuteUbergraph_DinoEntry_Cnidaria");

	UDinoEntry_Cnidaria_C_ExecuteUbergraph_DinoEntry_Cnidaria_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
