#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ModCommunication_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ModCommunication_Interface.ModCommunication_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UModCommunication_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ModCommunication_Interface.ModCommunication_Interface_C");
		return ptr;
	}


	void RequestModDataProcessing(const struct FName& Key, class UJsonObject* InJsonData, class UJsonObject** OutJsonData);
	void RequestModData(const struct FName& Key, class UJsonObject** JsonData);
	void SendModData(const struct FName& Key, class UJsonObject* JsonData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
